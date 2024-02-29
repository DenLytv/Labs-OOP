#include "Cube.h"
#include <cmath>

namespace uiuc {
	double Cube::calcVolume()
	{
		return pow(length, 3);
	}

	double Cube::calcSurface()
	{
		return (pow(length, 2) * 6);
	}

	double Cube::getLength()
	{
		return length;
	}

	void Cube::setLength(double len) {
		length = len;
	}
}

double uiud::Cube::getLength() {
	return cbrt(volume);
}

void uiud::Cube::setVolume(double vol) {
	volume = vol;
}