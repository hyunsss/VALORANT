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

void Gun::BuyGun(Gun* UserGun) {
	string Player_choice;
	//���� ������ �ִ� �� :
	cout << "������ ���۵Ǿ����ϴ� ." << endl;
	cout << "����Ͻ� ���� ����ּ��� ." << endl;
	cout << "Ŭ���� : �⺻ ��" << endl;
	cout << "��Ʈ : ������ ��" << endl;
	cout << "�θ��� : ���� �߿� ž" << endl;
	cout << "��� : ������ ��" << endl;
	cout << "���� : ��� ���� ������" << endl;
	cout << "���� : ������ ��" << endl;
	cin >> Player_choice;
	if (Player_choice == "Ŭ����") {
		UserGun = new Classic();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "��Ʈ") {
		UserGun = new Ghost();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "�θ���") {
		UserGun = new Sheriff();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "����") {
		UserGun = new Phantom();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "���") {
		UserGun = new Vandal();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else if (Player_choice == "����") {
		UserGun = new Odin();
		cout << "�÷��̾ " << UserGun->name << "�� �����߽��ϴ�!" << endl;
		return;
	}
	else {
		cout << "�߸� ���� �ϼ̽��ϴ� �ٽ� ����ּ��� !" << endl;
		BuyGun(UserGun);
	}
	
	return;
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