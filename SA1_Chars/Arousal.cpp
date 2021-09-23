

#include "stdafx.h"

#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <cmath>

#include "Arousal.h"
#include "SexActs.h"
#include "helper.h"

bool SonicAroused, TailsAroused, KnucklesAroused, AmyAroused, BigAroused;
int tailsArousedTimer = 0;
bool levelHasLoaded = false;

DataPointer(int, EVENT_ID, 0x03B2C570);


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

	if (GetPlayerDistance(EntityData1Ptrs[1], 0) < 30.0f && currentSexAct == Sex_None)
	{
		tailsArousedTimer++;

		//DisplayDebugStringFormatted(NJM_LOCATION(8, 16), "Tails Arousal Timer: %i",tailsArousedTimer);

		if (tailsArousedTimer > 90 && EntityData1Ptrs[1]->CharID == Characters_Tails)
		{
			TailsAroused = true;
		}

		if (tailsArousedTimer > 150)
		{
			SonicAroused = true;
		}

		if (tailsArousedTimer > 360)
		{
			int roll = rand() % 100;

			int percentChance = 50;

			if (isPublicPlace())
				percentChance = 10;

			if (CurrentLevel == LevelIDs_Casinopolis)
				percentChance = 75;

			//percentChance = 100;

			if (roll <= percentChance)
			{
				EntityData1Ptrs[0]->Action = 20;
				EntityData1Ptrs[1]->Action = 62;

				originalPlayer1Idle = CharObj2Ptrs[0]->AnimationThing.AnimData->Animation;
				originalPlayer2Idle = CharObj2Ptrs[1]->AnimationThing.AnimData->Animation;

				currentSexAct = Sex_SonicHumpsTails;
			}

			tailsArousedTimer = -3600;
		}
	}
	else
	{
		if (tailsArousedTimer > 0)
			tailsArousedTimer--;
	}
}

void refreshArousal()
{
	tailsArousedTimer = 0;

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

bool isColdLevel()
{
	if (CurrentLevel == LevelIDs_IceCap || CurrentLevel == LevelIDs_SkyDeck)
		return true;

	if (CurrentLevel == LevelIDs_EggCarrierOutside && !IsEggCarrierSunk() && CurrentAct != 3 && CurrentAct != 5 && CurrentAct != 4)
		return true;


	return false;
}

bool isPublicPlace()
{
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

	int chance = rand() % 100;

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

}



