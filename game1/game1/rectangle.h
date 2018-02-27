#pragma once
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

namespace my_game {

	class Rectangle {

	protected:
		float xc, yc;
		float width, height;

	public:
		Rectangle(float x = 0.0f, float y = 0.0f, float w = 0.0f, float h = 0.0f) : xc(x), yc(y), width(w), height(h) {};
	};
}
