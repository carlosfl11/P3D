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
		void move(float, float);
		void addShield(float);
		void addEnergy(float);
		void addDamage(float);

		void update();

		static int countObjects;
	};

	int Object::countObjects = 0;

	Object::Object(float posX, float posY, float sizeWidht, float sizeHeight, Type type) : CollisionBox(posX, posY, sizeWidht, sizeHeight) {
		index = countObjects;
		this->typeofItem = type;
		countObjects++;
	}

	// adiciona escudo
	void Object::addShield(float amount) {
		shield += amount;
	}

	// adiciona energia
	void Object::addEnergy(float amount) {
		energy += amount;
	}

	//adiciona dano
	void Object::addDamage(float amount) {
		plusDMG += amount;
	}

	// move o objecto
	void Object::move(float speedX, float speedY) {
		xc += speedX;
		yc += speedY;

	}

	void Object::update() {
		if (shield > 0)
			shield -= 1.0f;
		if (energy > 0)
			energy -= 1.0f;
	}

}