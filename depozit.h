#ifndef DEPOZIT_H
#define DEPOZIT_H
#include <iostream>

using namespace std;
class Depozit {
private:
	float sum_depozit;
	int kol_mounth;
	int procent = 5;
	int days;
	float sum;
public:
	void Set_sum_depozit();
	void Set_kol_mounth();
	void Set_days();
	float formyla();
};


#endif // !ADRESS_H