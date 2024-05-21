#include "pch.h"
#include "Frustrum.h"
#define _USE_MATH_DEFINES
#include <cmath>

double findArea(double r1, double r2, double t) {
	return t * M_PI * (r1 + r2) + M_PI * (pow(r1, 2) + pow(r2, 2));
}