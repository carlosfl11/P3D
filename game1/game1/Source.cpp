#include <iostream>
#include "Enemy.h"

using namespace std;
using namespace my_game;

int main() {
	Enemy spaceship(500.0f, 2600.0f, 80.0f, 90.0f, EnemyType::SpaceShip);
	Enemy meteor = Enemy(520.0f, 2700.0f, 50.0f, 50.0f, EnemyType::Meteor);
	bool endGame = false;

	while (!endGame) {

		cout << "Move:\n";
		spaceship.move(0.0f, -5.0f);
		meteor.move(0.0f, -10.0f);
		cout << "Test collision: ";
		spaceship.computeCollision(meteor);
		endGame = spaceship.getHitState() || meteor.getHitState();
		if (!endGame) cout << "No hit\n\n";
	}

	return 0;
}