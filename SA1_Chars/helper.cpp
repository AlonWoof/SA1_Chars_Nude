
#include "stdafx.h"
#include "SADXModLoader.h"
#include "helper.h"
#include <math.h>



bool checkInsideRadius(NJS_VECTOR point, float dist)
{
    if (CheckDistance(&EntityData1Ptrs[0]->Position, &point) < dist)
    {
        return true;
    }
	
    return false;
}

NJS_VECTOR lerpNJVector(NJS_VECTOR a, NJS_VECTOR b, float factor)
{
	
}

double CheckDistance(NJS_VECTOR* a1, NJS_VECTOR* a2)
{
    double v2; // st4
    double v3; // st6
    double y_dist; // st4
    double x_len; // st5
    double z_dist; // st6
    float len; // [esp+4h] [ebp-4h]

    v2 = a2->x - a1->x;
    v3 = v2 * v2;
    y_dist = a2->y - a1->y;
    x_len = v3;
    z_dist = a2->z - a1->z;
    len = y_dist * y_dist + x_len + z_dist * z_dist;
    if (len < 0.02500000037252903)
    {
        return 0.0;
    }
    return (float)sqrt(len);
}

