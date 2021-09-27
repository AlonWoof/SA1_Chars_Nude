
#include "stdafx.h"
#include "SADXModLoader.h""

#include "SexActs.h"
#include "Arousal.h"

NJS_ACTION* originalPlayer1Idle;
NJS_ACTION* originalPlayer2Idle;

int currentSexAct = Sex_None;

void Sex_SonicHumpTails_Start()
{
	EntityData1Ptrs[0]->Action = 20;
	EntityData1Ptrs[1]->Action = 62;

	originalPlayer1Idle = SONIC_ACTIONS[0];
	originalPlayer2Idle = MILES_ACTIONS[0];

	currentSexAct = Sex_SonicHumpsTails;
}

void Sex_SonicHumpTails_Loop()
{
	
	CharObj2Ptrs[0]->AnimationThing.Index = 0;
	CharObj2Ptrs[1]->AnimationThing.Index = 0;

	CharObj2Ptrs[0]->AnimationThing.AnimData->Animation = &SonicHumpingAction;
	CharObj2Ptrs[1]->AnimationThing.AnimData->Animation = &TailsHumpedAction;
	EntityData1Ptrs[1]->Position = EntityData1Ptrs[0]->Position;
	EntityData1Ptrs[1]->Rotation = EntityData1Ptrs[0]->Rotation;

}


void updateSex()
{

	switch (currentSexAct)
	{
		case Sex_None:
			break;

		case Sex_SonicHumpsTails:
			Sex_SonicHumpTails_Loop();
			break;
	}

	if (currentSexAct != Sex_None)
	{
		bool interrupt = false;

		if (abs(ControllerPointers[0]->LeftStickX) > 3 || abs(ControllerPointers[0]->LeftStickY) > 3)
			interrupt = true;

		if (GameState != 15)
			interrupt = true;

		if (interrupt)
			stopSex();
	}
}



void stopSex()
{
	currentSexAct = Sex_None;

	EntityData1Ptrs[0]->Action = 1;
	CharObj2Ptrs[0]->AnimationThing.AnimData->Animation = originalPlayer1Idle;

	resetArousal();

	if (EntityData1Ptrs[1])
	{
		CharObj2Ptrs[1]->AnimationThing.AnimData->Animation = originalPlayer2Idle;
		EntityData1Ptrs[1]->Action = 1;
	}
	
}
