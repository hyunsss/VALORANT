#include <iostream>
#include "Player.h"
#include <windows.h>
using namespace std;

void Player::ChoicePlayer(Player* User) {


	cout << "캐릭터 선택 창입니다. " << endl;
	cout << "세이지, 브림스톤, 소바, 피닉스, 제트 " << endl;
	string Player_choice;
	cin >> Player_choice;
	if (Player_choice == "세이지") {
		User = new Sage();
		cout << "플레이어는 : " << User->name << "을 선택했습니다!" << endl;
		return;
	}
	else if (Player_choice == "브림스톤") {
		User = new BreemStone();
		cout << "플레이어는 : " << User->name << "을 선택했습니다!" << endl;
		return;
	}
	else if (Player_choice == "소바") {
		User = new Soba();
		cout << "플레이어는 : " << User->name << "을 선택했습니다!" << endl;
		return;
	}
	else if (Player_choice == "피닉스") {
		User = new Pheonix();
		cout << "플레이어는 : " << User->name << "을 선택했습니다!" << endl;
		return;
	}
	else if (Player_choice == "제트") {
		User = new Zet();
		cout << "플레이어는 : " << User->name << "을 선택했습니다!" << endl;
		return;
	}
	else {
		cout << "잘못된 캐릭터를 입력했습니다 다시 입력해주세요" << endl;
		return ChoicePlayer(User);
	}
	Sleep(800);
	system("cls");
}



void Player::P_Damage(Player player) {
	cout << "플레이어가 " << player.name << "에게 총을 맞았습니다! " << endl;
	//	cout << "총의 데미지 : " << gun.Damage << endl;
	cout << "현재 체력 : " << Health << endl;
	//	Health -= gun.Damage;
}