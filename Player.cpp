#include <iostream>
#include "Player.h"
#include <windows.h>
using namespace std;

void Player::ChoicePlayer(Player* User) {


	cout << "ĳ���� ���� â�Դϴ�. " << endl;
	cout << "������, �긲����, �ҹ�, �Ǵн�, ��Ʈ " << endl;
	string Player_choice;
	cin >> Player_choice;
	if (Player_choice == "������") {
		User = new Sage();
		cout << "�÷��̾�� : " << User->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "�긲����") {
		User = new BreemStone();
		cout << "�÷��̾�� : " << User->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "�ҹ�") {
		User = new Soba();
		cout << "�÷��̾�� : " << User->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "�Ǵн�") {
		User = new Pheonix();
		cout << "�÷��̾�� : " << User->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "��Ʈ") {
		User = new Zet();
		cout << "�÷��̾�� : " << User->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else {
		cout << "�߸��� ĳ���͸� �Է��߽��ϴ� �ٽ� �Է����ּ���" << endl;
		return ChoicePlayer(User);
	}
	Sleep(800);
	system("cls");
}



void Player::P_Damage(Player player) {
	cout << "�÷��̾ " << player.name << "���� ���� �¾ҽ��ϴ�! " << endl;
	//	cout << "���� ������ : " << gun.Damage << endl;
	cout << "���� ü�� : " << Health << endl;
	//	Health -= gun.Damage;
}