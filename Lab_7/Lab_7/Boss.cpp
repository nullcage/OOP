#include "Boss.h"
#include <iostream>

Boss::Boss(std::string tsurname, std::string tname, std::string tmidname, int tage, int tnumber_of_workers)
{
	surname = tsurname;
	name = tname;
	midname = tmidname;
	age = tage;
	number_of_workers = tnumber_of_workers;
}

void Boss::print()
{
	std::cout << "[Данные о руководителе]\nФИО: " << surname << " " << name << " " << midname << "\nВозраст: " << age << "\nКоличество работников: " << number_of_workers << '\n';
}