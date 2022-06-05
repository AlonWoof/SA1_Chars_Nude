

#include "stdafx.h"

#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <cmath>

#include "Arousal.h"
#include "SexActs.h"
#include "helper.h"

bool SonicAroused, TailsAroused, KnucklesAroused, AmyAroused, BigAroused;
int arousalTimer = 0;
bool levelHasLoaded = false;

DataPointer(int, EVENT_ID, 0x03B2C570);

WorldLocation CasinoShowersLocation = { LevelIDs_Casinopolis, 0, {-246.0f, -199.0f, -548.0f}, 200.0f };
WorldLocation TailsWorkshopLocation = { LevelIDs_MysticRuins, 0, {1476.0f, 200.0f, 772.0f}, 500.0f };

WorldLocation coldPlaces[] =
{
	{LevelIDs_MysticRuins,1,{-1428.0f,68.2f,358.20f},700.0f}
};

WorldLocation privatePlaces[] =
{
	{LevelIDs_MysticRuins,2,{0.0f,0.0f,0.0f},80000.0f},
	{LevelIDs_MysticRuins,1,{0.0f,0.0f,0.0f},80000.0f},
	{LevelIDs_MysticRuins,0,{0.0f,0.0f,0.0f},80000.0f},

	//Behind the walls at town hall.
	{LevelIDs_StationSquare,0,{393.0f, 0.0f, 448.0f},80.0f},
	{LevelIDs_StationSquare,0,{160.0f, 0.0f, 448.0f},80.0f},

	//Behind the Twinkle Park entrance
	{LevelIDs_StationSquare,3,{690.0f, 0.0f, 1598.0f},100.0f},

	//Tails Jet Anklet location
	{LevelIDs_StationSquare,3,{662.0f, 56.0f, 1270.0f},60.0f},

	//Alley by Casinopolis
	{LevelIDs_StationSquare,1,{-701.0f, 0.0f, 1330.0f},200.0f},

	{LevelIDs_SSGarden, 0, {0.0f, 0.0f, 0.0f}, 10000.0f},
	{LevelIDs_MRGarden, 0, {0.0f, 0.0f, 0.0f}, 10000.0f},
	{LevelIDs_ECGarden, 0, {0.0f, 0.0f, 0.0f}, 10000.0f},

	//Tails workshop
	{ LevelIDs_MysticRuins, 0, {1476.0f, 200.0f, 772.0f}, 200.0f },

	//Casinopolis showers
	CasinoShowersLocation
};



void updateArousal()
{


	if (GameState == 20 || GameState == 21 || GameState == 17 || GameState == 5 || GameState == 9)
	{
		resetArousal();
		levelHasLoaded = false;
	}
	else if (!levelHasLoaded && GameState == 4)
	{
		refreshArousal();
		levelHasLoaded = true;
	}

	if (EV_MainThread_ptr)
	{
		//Otherwise cutscenes would be awkward.
		resetArousal();

		//One exception, when Amy meets Sonic, gets excited
		if (EVENT_ID == 18 || EVENT_ID == 98 || EVENT_ID == 99)
		{
			AmyAroused = true;
		}
	}

	if (EntityData1Ptrs[0] != NULL && EntityData1Ptrs[1] != NULL && CurrentCharacter == Characters_Sonic)
	{
		//My favorite ship~
		if (EntityData1Ptrs[1]->CharID == Characters_Tails)
			SonTails_ArousalEvents();
	}

	if (EntityData1Ptrs[0] != NULL && CurrentCharacter == Characters_Amy)
	{
		Amy_ArousalEvents();

		if (EntityData1Ptrs[1])
		{
			//Boys ♥

			if (EntityData1Ptrs[1]->CharID == Characters_Tails)
				AmyAroused = true;

			if (EntityData1Ptrs[1]->CharID == Characters_Sonic)
				AmyAroused = true;
		}
	}
}

void Amy_ArousalEvents()
{

	if (currentSexAct != Sex_None)
		return;

	if (CharObj2Ptrs[0] == NULL)
		return;

	//Only roll when idle timer is at this specific frame.
	if (CharObj2Ptrs[0]->IdleTime != 1300)
		return;


	if (AmyAroused)
	{

		int roll = rand() % 100;

		int percentChance = 75;

		if (isPublicPlace())
			percentChance = 10;

		if (roll <= percentChance)
		{
			EntityData1Ptrs[0]->Action = 13;

			originalPlayer1Idle = CharObj2Ptrs[0]->AnimationThing.AnimData->Animation;

			currentSexAct = Sex_Amy_Masturbate;
		}
	}
	else
	{
		//Random chance of arousal because she horny a lot.
		int roll = rand() % 100;

		int percentChance = 5;

		//Maybe she's an exhibitionist? X3
		if (isPublicPlace())
			percentChance = 15;

		if (roll <= percentChance)
		{
			AmyAroused = true;
		}
	}

}

void SonTails_ArousalEvents()
{
	if (GetPlayerDistance(EntityData1Ptrs[1], 0) < 400.0f)
	{
		if (EntityData1Ptrs[0]->Action == 83)
		{
			if (EntityData1Ptrs[1]->CharID == Characters_Tails)
				TailsAroused = true;
		}
	}


	if (GetPlayerDistance(EntityData1Ptrs[1], 0) < 100.0f && currentSexAct == Sex_None)
	{
		arousalTimer++;

		//DisplayDebugStringFormatted(NJM_LOCATION(8, 16), "Tails Arousal Timer: %i",arousalTimer);

		if (arousalTimer > 900 && EntityData1Ptrs[1]->CharID == Characters_Tails && !TailsAroused)
		{
			TailsAroused = true;
			arousalTimer = 0;
		}

		if (arousalTimer > 900 && !SonicAroused && TailsAroused && EntityData1Ptrs[1]->CharID == Characters_Tails)
		{
			SonicAroused = true;
			arousalTimer = 0;
		}

		if (arousalTimer > 3600 && SonicAroused && TailsAroused && EntityData1Ptrs[1]->CharID == Characters_Tails)
		{
			int roll = rand() % 100;

			int percentChance = 75;

			if (isPublicPlace())
				percentChance = 10;

			//Steamy shower time~
			if (CurrentLevel == LevelIDs_Casinopolis && CurrentAct == 0)
				percentChance = 100;
			
			//Gross, who would do that in the trash zone? That's how you get an infection.
			if (CurrentLevel == LevelIDs_Casinopolis && CurrentAct == 1)
				percentChance = 0;

			//percentChance = 100;

			if (roll <= percentChance)
			{
				EntityData1Ptrs[0]->Action = 20;
				EntityData1Ptrs[1]->Action = 62;

				originalPlayer1Idle = CharObj2Ptrs[0]->AnimationThing.AnimData->Animation;
				originalPlayer2Idle = CharObj2Ptrs[1]->AnimationThing.AnimData->Animation;

				currentSexAct = Sex_SonicHumpsTails;
			}

			arousalTimer = -3600;
		}
	}
	else
	{
		if (arousalTimer > 0)
			arousalTimer--;
	}
}

void refreshArousal()
{
	arousalTimer = 0;

	SonicAroused = rollArousalChance(Characters_Sonic);
	TailsAroused = rollArousalChance(Characters_Tails);
	KnucklesAroused = rollArousalChance(Characters_Knuckles);
	AmyAroused = rollArousalChance(Characters_Amy);
	BigAroused = rollArousalChance(Characters_Big);
}

void resetArousal()
{
	SonicAroused = false;
	TailsAroused = false;
	KnucklesAroused = false;
	AmyAroused = false;
	BigAroused = false;
}

bool isInLocation(WorldLocation * wl)
{
	if (CurrentLevel == wl->levelID && CurrentAct == wl->act)
	{

		DrawCollisionSphere(&wl->position, wl->range);

		if (IsPlayerInsideSphere(&wl->position, wl->range))
		{
			return true;
		}

	}

	return false;
}

bool isColdLevel()
{
	if (CurrentLevel == LevelIDs_IceCap || CurrentLevel == LevelIDs_SkyDeck)
		return true;

	if (CurrentLevel == LevelIDs_EggCarrierOutside && !IsEggCarrierSunk() && CurrentAct != 3 && CurrentAct != 5 && CurrentAct != 4)
		return true;


	for each (WorldLocation wl in coldPlaces)
	{
		if (isInLocation(&wl))
			return true;
	}

	return false;
}

bool isPublicPlace()
{
	for each (WorldLocation wl in privatePlaces)
	{
		if (isInLocation(&wl))
		{
			return false;
		}
	}


	if (CurrentLevel == LevelIDs_StationSquare && CurrentAct != 2 && CurrentAct != 5)
		return true;

	if (GameMode != GameModes_Adventure_Field)
		return true;


	return false;
}

bool rollArousalChance(Characters chara)
{
	if (isColdLevel())
		return false;

	int hornylevel = 0;

	switch (chara)
	{
	case Characters_Sonic:
		hornylevel = SonicBaseArousal;
		break;

	case Characters_Tails:
		hornylevel = TailsBaseArousal;
		break;

	case Characters_Knuckles:
		hornylevel = KnucklesBaseArousal;
		break;

	case Characters_Amy:
		hornylevel = AmyBaseArousal;
		break;

	case Characters_Big:
		hornylevel = BigBaseArousal;
		break;
	}

	int chance = rand() % 200;

	if (chance <= hornylevel)
		return true;

	return false;
}

void drawArousalDebug()
{

	if (SonicAroused)
		DisplayDebugStringFormatted(NJM_LOCATION(32, 16), "   SONIC HAS A BONER");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 16), "   Sonic is normal.");

	if (TailsAroused)
		DisplayDebugStringFormatted(NJM_LOCATION(32, 17), "   TAILS HAS A BONER");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 17), "   Tails is normal.");

	if (KnucklesAroused)
		DisplayDebugStringFormatted(NJM_LOCATION(32, 18), "   KNUCKLES HAS A BONER");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 18), "   Knuckles is normal.");

	if (AmyAroused)
		DisplayDebugStringFormatted(NJM_LOCATION(32, 19), "   AMY IS WET");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 19), "   Amy is normal.");

	if (BigAroused)
		DisplayDebugStringFormatted(NJM_LOCATION(32, 20), "   BIG HAS A BONER");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 20), "   Big is normal.");

	if(isColdLevel())
		DisplayDebugStringFormatted(NJM_LOCATION(32, 22), "It's cold here.");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 22), "Temperature is warm.");

	if(isPublicPlace())
		DisplayDebugStringFormatted(NJM_LOCATION(32, 23), "Public place, highly visible.");
	else
		DisplayDebugStringFormatted(NJM_LOCATION(32, 23), "This place is secluded~");
}



