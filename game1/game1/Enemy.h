#pragma once
#include <iostream>
#include "CollisionBox.h"

namespace my_game {

	enum class EnemyType { SpaceShip, SpaceMonster, Meteor };

	class Enemy : public CollisionBox {
		int index;
		bool hide;
		EnemyType typeOfEnemy;
	public:
		Enemy(float, float, float, float, EnemyType);
		void setHide();
		void setShow();
		void move(float, float);

		static int countEnemies;
	};

	int Enemy::countEnemies = 0;

	Enemy::Enemy(float posX, float posY, float sizeWidth, float sizeHeight, EnemyType type) : CollisionBox(posX, posY, sizeWidth, sizeHeight) {
		index = countEnemies;
		hide = false;
		this->typeOfEnemy = type;
		countEnemies++;
	}

	void Enemy::setHide() {
		hide = false;
	}

	void Enemy::setShow() {
		hide = true;
	}

	void Enemy::move(float speedX, float speedY) {
		xc += speedX;
		yc += speedY;
		std::cout << "[" << index << "] x=" << xc << " y=" << yc << std::endl;
	}
}