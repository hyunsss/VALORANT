#pragma once
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;
class Gun
{

protected:
	int Prize;
	int Ammo;
	int AllAmmo;

public:
	int CurrentAmmo;
	Gun() {}
	string name;
	int Damage;

	void Shot();
	void Reload();
	void BuyGun(Gun* UserGun);
	void SellGun(Gun* UserGun);
	void Attack(Gun* UserGun);
};
class Classic : public Gun {
public:
	Classic() {
		name = "Ŭ����";
		Prize = 0;
		Ammo = 12;
		CurrentAmmo = Ammo;
		AllAmmo = 36;
		Damage = 20;
	}
};

class Ghost : public Gun {
public:
	Ghost() {
		name = "��Ʈ";
		Prize = 500;
		Ammo = 15;
		CurrentAmmo = Ammo;
		AllAmmo = 45;
		Damage = 30;
	}
};

class Sheriff : public Gun {
public:
	Sheriff() {
		name = "�θ���";
		Prize = 800;
		Ammo = 6;
		CurrentAmmo = Ammo;
		AllAmmo = 24;
		Damage = 55;
	}
};

class Vandal : public Gun {
public:
	Vandal() {
		name = "���";
		Prize = 2900;
		Ammo = 25;
		CurrentAmmo = Ammo;
		AllAmmo = 50;
		Damage = 40;
	}
};

class Phantom : public Gun {
public:
	Phantom() {
		name = "����";
		Prize = 2900;
		Ammo = 30;
		CurrentAmmo = Ammo;
		AllAmmo = 60;
		Damage = 35;
	}
};

class Odin : public Gun {
public:
	Odin() {
		name = "����";
		Prize = 3200;
		Ammo = 100;
		CurrentAmmo = Ammo;
		AllAmmo = 150;
		Damage = 30;
	}
};