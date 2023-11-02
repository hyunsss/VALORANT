#include <iostream>
#include <vector>
#include "Player.h"
#include "Gun.h"
#include <windows.h>
//
using namespace std;
Player player;
Gun gun;
void GameStart(Player* User, Gun* UserGun);


int main()
{
	Player* User1 = new Sage();
	Gun* User1Gun = new Classic();
	GameStart(User1, User1Gun);
}

void GameStart(Player* User1, Gun* User1Gun) {
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
			player.ChoicePlayer(User1);
			break;
		case 2:					// 무기 선택
			delete User1Gun;
			system("cls");
			gun.BuyGun(User1Gun);
			cout << User1Gun->name;
			break;
		case 3:					//무기 다시 선택
			gun.SellGun(User1Gun);
			gun.BuyGun(User1Gun);
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