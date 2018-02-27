#pragma once
#include <iostream>
#include "rectangle.h"

namespace my_game {

	class CollisionBox : public Rectangle {
		bool hit; // Sabe que colidiu ou não, mas não com o quê.
	public:
		CollisionBox(float x, float y, float w, float h) : Rectangle(x + w / 2, y + h / 2, w, h), hit(false) {};
		void computeCollision(CollisionBox&);
		bool getHitState() { return hit; };
	};

	void CollisionBox::computeCollision(CollisionBox& box) {
		float minX, maxX;
		float minY, maxY;
		minX = MIN(xc - width / 2.0f, box.xc - box.width / 2.0f);
		maxX = MAX(xc + width / 2.0f, box.xc + box.width / 2.0f);
		minY = MIN(yc - height / 2.0f, box.yc - box.height / 2.0f);
		maxY = MAX(yc + height / 2.0f, box.yc + box.height / 2.0f);
		if ((maxX - minX < width + box.width) && (maxY - minY < height + box.height))
		{
			// Sinaliza a colisão nos dois objetos
			hit = true;
			box.hit = true; // objeto que entra como argumento na função

			std::cout << "BOOOOM!\n";
		}
	};
}
