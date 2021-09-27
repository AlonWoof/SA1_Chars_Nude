#pragma once

#define SonicBaseArousal 4; //A nice somewhat rare chance.
#define TailsBaseArousal 4; //Tails might get aroused if he watches sonic shower, but otherwise equal
#define KnucklesBaseArousal 3; //He's more serious so less horny power.
#define AmyBaseArousal 8; //She's got the big horny because of Sonic lol
#define BigBaseArousal 1; //The elusive catboner

extern bool SonicAroused, TailsAroused, KnucklesAroused, AmyAroused, BigAroused;
extern int tailsArousedTimer;

void updateArousal();
bool isColdLevel();
bool rollArousalChance(Characters chara);
void resetArousal();
void drawArousalDebug();
void refreshArousal();
void SonTails_ArousalEvents();
void Amy_ArousalEvents();
bool isPublicPlace();
//bool checkInsideRadius(NJS_VECTOR point, float dist);
