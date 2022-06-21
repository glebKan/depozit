#include "depozit.h"

void Depozit::Set_kol_mounth() {
	cout << "Введите количество месяцев: ";
	cin >> kol_mounth;
}

void Depozit::Set_sum_depozit() {
	cout << "Введите сумму депозита: ";
	cin >> sum_depozit;
}

void Depozit::Set_days() {
	cout << "Введите количество дней: ";
	cin >> days;
}

float Depozit::formyla() {
	Set_sum_depozit();
	Set_kol_mounth();
	Set_days();
	sum = sum_depozit * (procent / 100) / 364 * days;
	return sum;
}
