#include <iostream>
#include "Player.h"
#include <windows.h>
using namespace std;


void Player::P_Damage(Player player) {
	cout << "플레이어가 " << player.name << "에게 총을 맞았습니다! " << endl;
	//	cout << "총의 데미지 : " << gun.Damage << endl;
	cout << "현재 체력 : " << Health << endl;
	//	Health -= gun.Damage;
}