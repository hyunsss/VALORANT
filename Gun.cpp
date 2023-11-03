#include <iostream>
#include "Gun.h"
#include "Player.h"
#include <windows.h>
using namespace std;

void Gun::Reload() {
	cout << endl;
	cout << "�÷��̾ �������� �մϴ�" << endl;
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
		cout << "���� źȯ�� �����ϴ�!!!!!" << endl;
		return;
	}


	cout << "������ źȯ : " << CurrentAmmo << "\t ���� źȯ " << AllAmmo << endl;

}

void Gun::Shot() {
	if (CurrentAmmo != 0) CurrentAmmo -= 1;

}

void Gun::SellGun(Gun* UserGun) {

	free(UserGun);
	cout << "�÷��̾ " << UserGun->name << "�� �Ǹ��߽��ϴ�!" << endl;
	//���� ������ �ִ� �� :
}

void Gun::Attack(Gun* UserGun) {
	if (UserGun->CurrentAmmo != 0) {
		cout << "�÷��̾ ���� ��ҽ��ϴ�!" << endl;
		UserGun->Shot();
		cout << "���� źȯ " << UserGun->CurrentAmmo << "�� �Դϴ�" << endl;
		//	cout << "���� ������ : " << gun->Damage << endl;
		//	player.Health -= gun->Damage;
	}
	else {
		cout << "ƽ!ƽ! ���� �Ѿ��� �����ϴ� �������� �ؾ��մϴ�!!!" << endl;
		return;
	}

}