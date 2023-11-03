#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player {
private:

protected:
	//STATUS
	int Health;
	int Armor;

	int Money;
	// KDA STATUS //
	short Kill;
	short Death;
	short Assist;
	// KDA STATUS //
public:
	string name;
	Player() {
		Health = 100;
		Armor = 0;
		Money = 800;
		Kill = 0;
		Death = 0;
		Assist = 0;
	}
	void P_Damage(Player player);
};

class Sage : public Player {
public:
	Sage() {
		name = "������";
	}
};

class BreemStone : public Player {
public:
	BreemStone() {
		name = "�긲����";
	}
};

class Soba : public Player {
public:
	Soba() {
		name = "�ҹ�";
	}
};

class Pheonix : public Player {
public:
	Pheonix() {
		name = "�Ǵн�";
	}
};

class Zet : public Player {
public:
	Zet() {
		name = "��Ʈ";
	}
};




