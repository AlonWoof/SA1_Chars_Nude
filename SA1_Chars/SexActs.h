#pragma once

#include "SADXModLoader.h"

extern NJS_ACTION SonicHumpingAction;
extern NJS_ACTION TailsHumpedAction;
extern NJS_ACTION AmyMasturbateAction;
extern int currentSexAct;
extern NJS_ACTION* originalPlayer1Idle;
extern NJS_ACTION* originalPlayer2Idle;

FunctionPointer(void, EV_SetFace, (ObjectMaster* tp, const char* str), 0x4310D0);
FunctionPointer(void, EV_ClrFace, (ObjectMaster* tp), 0x4310F0);
FunctionPointer(ObjectMaster*, EV_GetPlayer, (int no), 0x42FC40);

enum SexActs
{
	Sex_None,
	Sex_SonicHumpsTails,
	Sex_Amy_Masturbate
};

void updateSex();
void stopSex();
void Sex_SonicHumpTails_Loop();
void Sex_AmyMasturbate_Loop();
