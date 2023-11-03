#include <iostream>
#include <vector>
#include "Player.h"
#include "Gun.h"
#include "Inventory.h"
#include <windows.h>
//

using namespace std;
Player player;
Gun gun;
void GameStart(Player* User, Gun* UserGun, Inventory* UserInven);
void SelectGun(Gun* UserGun);
void SelectPlayer(Player* User);

int main()
{
	Inventory* User1Inven = new Inventory();
	Player* User1 = new Sage();
	Gun* User1Gun = new Classic();
	GameStart(User1, User1Gun, User1Inven);
}

void GameStart(Player* User1, Gun* User1Gun, Inventory* UserInven) {
	string Player_choice;
	int choice;

	cout << "게임을 시작합니다. " << endl;
	while (5) {
		cout << "원하는 번호를 골라 게임을 진행해주세요. " << endl;
		cout << "1. 캐릭터 선택 2. 무기 선택 3. 무기 다시 선택 4. 공격 5. 리로드" << endl;
		cout << "===================================================" << endl;

		cin >> choice;
		switch (choice)
		{
		case 1:					// 캐릭터 선택
			free(User1);
			//			system("cls");
			SelectPlayer(User1);
			UserInven->PlayerSetting(User1);
			break;
		case 2:					// 무기 선택
			delete User1Gun;
			system("cls");
			SelectGun(User1Gun);
			UserInven->GunSetting(User1Gun);
			break;
		case 3:					//무기 다시 선택
			gun.SellGun(User1Gun);
			SelectGun(User1Gun);
		case 4:					//공격
			gun.Attack(User1Gun);
			break;
		case 5:					//리로드
			User1Gun->Reload();
		default:
			break;
		}
	}

}

void SelectGun(Gun* UserGun) {
	string Player_choice;
	cout << "게임이 시작되었습니다 ." << endl;
	cout << "사용하실 총을 골라주세요 ." << endl;
	cout << "클래식 : 기본 총" << endl;
	cout << "고스트 : 적당한 총" << endl;
	cout << "셰리프 : 권총 중엔 탑" << endl;
	cout << "밴달 : 묵직한 총" << endl;
	cout << "팬텀 : 밴달 보단 가벼움" << endl;
	cout << "오딘 : 무서운 총" << endl;
	cin >> Player_choice;
	if (Player_choice == "클래식") {
		UserGun = new Classic();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else if (Player_choice == "고스트") {
		UserGun = new Ghost();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else if (Player_choice == "셰리프") {
		UserGun = new Sheriff();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else if (Player_choice == "팬텀") {
		UserGun = new Phantom();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else if (Player_choice == "밴달") {
		UserGun = new Vandal();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else if (Player_choice == "오딘") {
		UserGun = new Odin();
		cout << "플레이어가 " << UserGun->name << "을 구매했습니다!" << endl;
		return;
	}
	else {
		cout << "잘못 선택 하셨습니다 다시 골라주세요 !" << endl;
		SelectGun(UserGun);
	}

	return;
}

void SelectPlayer(Player* User) {

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
		return SelectPlayer(User);
	}
	Sleep(800);
	system("cls");
}