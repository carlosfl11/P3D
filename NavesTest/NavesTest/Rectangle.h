#pragma once
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

namespace spaceShips {

	class Rectangle {

	protected:
		float xc, yc;
		float width, height;

	public:
		Rectangle(float x, float y, float w, float h) : xc(x), yc(y), width(w), height(h) {};

	};
}
