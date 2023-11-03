#pragma once
#include "Player.h"
#include "Gun.h"
#include <iostream>
using namespace std;
//11111
class Inventory {
private :
	Player *p;
	Gun *g;

public:
	Inventory() {
		p = NULL;
		g = NULL;
	}

	void PlayerSetting(Player* player) {
		p = player;
	}
	void GunSetting(Gun* gun) {
		g = gun;
	}
};
