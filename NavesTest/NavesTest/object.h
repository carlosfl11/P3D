#pragma once
#include <iostream>
#include "CollisionBox.h"

namespace spaceShips {
	enum class Type { SpaceShip, SpaceBoss };

	class Object : public CollisionBox {
		int index;
		Type typeofItem;
		float shield{}, energy{}, plusDMG{};
	public:
		Object(float, float, float, float, Type);
		Object(float, float, float, float, Type, int, float);
		void move(float, float);
		void addShield(float);
		void addEnergy(float);
		void addDamage(float);

		static int countObjects;
	};

	int Object::countObjects = 0;

	Object::Object(float posX, float posY, float sizeWidht, float sizeHeight, Type type) : CollisionBox(posX, posY, sizeWidht, sizeHeight) {
		index = countObjects;
		this->typeofItem = type;
		countObjects++;
	}



	void Object::move(float speedX, float speedY) {
		xc += speedX;
		yc += speedY;

	}
}