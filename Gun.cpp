#include <iostream>
#include "Gun.h"
#include "Player.h"
#include <windows.h>
using namespace std;

void Gun::Reload() {
	cout << endl;
	cout << "플레이어가 재장전을 합니다" << endl;
	if (AllAmmo != 0) {
		if (AllAmmo > Ammo) {
			AllAmmo -= Ammo - CurrentAmmo;
			CurrentAmmo = Ammo;
		}
		else if (AllAmmo == Ammo) {
			CurrentAmmo = Ammo;
			AllAmmo = 0;
		}
		else if (AllAmmo < Ammo) {
			AllAmmo += CurrentAmmo;
			if (AllAmmo > Ammo) {
				CurrentAmmo = Ammo;
				AllAmmo -= Ammo;
			}
			else if (AllAmmo + CurrentAmmo < Ammo) {
				AllAmmo = 0;
				CurrentAmmo = AllAmmo;
			}

		}
	}
	else {
		cout << "남은 탄환이 없습니다!!!!!" << endl;
		return;
	}


	cout << "장전된 탄환 : " << CurrentAmmo << "\t 남은 탄환 " << AllAmmo << endl;

}

void Gun::Shot() {
	if (CurrentAmmo != 0) CurrentAmmo -= 1;

}

void Gun::SellGun(Gun* UserGun) {

	free(UserGun);
	cout << "플레이어가 " << UserGun->name << "을 판매했습니다!" << endl;
	//현재 가지고 있는 총 :
}

void Gun::Attack(Gun* UserGun) {
	if (UserGun->CurrentAmmo != 0) {
		cout << "플레이어가 총을 쏘았습니다!" << endl;
		UserGun->Shot();
		cout << "남은 탄환 " << UserGun->CurrentAmmo << "발 입니다" << endl;
		//	cout << "총의 데미지 : " << gun->Damage << endl;
		//	player.Health -= gun->Damage;
	}
	else {
		cout << "틱!틱! 남은 총알이 없습니다 재장전을 해야합니다!!!" << endl;
		return;
	}

}