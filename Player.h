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
	void ChoicePlayer(Player* User);

	/*bool BuyWeapon(Gun* gun) {
		if (Money > gun->Prize) {
			Money -= gun->Prize;
			return true;
		}
		
		cout << "플레이어의 돈이 부족합니다!! 다른 것을 골라주세요" << endl;
		return false;
	}*/
	

};

class Sage : public Player {
public:
	Sage() {
		name = "세이지";
	}
};

class BreemStone : public Player {
public:
	BreemStone() {
		name = "브림스톤";
	}
};

class Soba : public Player {
public:
	Soba() {
		name = "소바";
	}
};

class Pheonix : public Player {
public:
	Pheonix() {
		name = "피닉스";
	}
};

class Zet : public Player {
public:
	Zet() {
		name = "제트";
	}
};




