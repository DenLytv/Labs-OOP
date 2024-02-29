#pragma once
namespace uiuc {
	class Cube {
	public:
		double calcVolume();
		double calcSurface();
		double getLength();
		void setLength(double len);
	private:
		double length;
	};
}

namespace uiud {
	class Cube {
	public:
		double getLength();
		void setVolume(double vol);
	private:
		double volume;
	};
}