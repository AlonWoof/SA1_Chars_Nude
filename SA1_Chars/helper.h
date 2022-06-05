#pragma once

#include <SADXModLoader.h>

bool checkInsideRadius(NJS_VECTOR point, float dist);

NJS_VECTOR lerpNJVector(NJS_VECTOR a, NJS_VECTOR b, float factor);

double CheckDistance(NJS_VECTOR* a1, NJS_VECTOR* a2);

typedef struct 
{ 
	LevelIDs levelID; 
	int act;
	NJS_VECTOR position; 
	float range;

} WorldLocation;
