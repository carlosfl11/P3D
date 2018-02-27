#pragma once
#include <iostream>
#include "Rectangle.h"

namespace spaceShips {
	class CollisionBox : public Rectangle {

		bool hit;

	public:
		CollisionBox(float x, float y, float w, float h) : Rectangle(x + w / 2, y + h / 2, w, h), hit(false) {};
		bool getHitState() { return hit; };
		void testCollision(CollisionBox&);
	};

	void CollisionBox::testCollision(CollisionBox &box) {
		float minX, maxX;
		float minY, maxY;

		minX = MIN(xc - width / 2.0f, box.xc - box.width / 2.0f);
		maxX = MAX(xc + width / 2.0f, box.xc + box.width / 2.0f);
		minY = MIN(yc - height / 2.0f, box.yc - box.height / 2.0f);
		maxY = MAX(yc + height / 2.0f, box.yc + box.height / 2.0f);

		if ((maxX - minX < width + box.width) && (maxY - minY < height + box.height)) {
			hit = true;
			box.hit = true;
			
			std::cout << "Contacto!\n";
		}
	}
}