#include <iostream>
#include "Player.h"
#include <windows.h>
using namespace std;


void Player::P_Damage(Player player) {
	cout << "�÷��̾ " << player.name << "���� ���� �¾ҽ��ϴ�! " << endl;
	//	cout << "���� ������ : " << gun.Damage << endl;
	cout << "���� ü�� : " << Health << endl;
	//	Health -= gun.Damage;
}