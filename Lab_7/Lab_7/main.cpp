#include <iostream>
#include "Human.h"
#include "Boss.h"
#include "Student.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Boss boss{ "Воронов", "Андрей", "Александрович", 34, 15};
	Student student{ "Кужахметова", "Арина", "Сериковна", 18, true };
	Human* human = &student;

	human->print();
	std::cout << '\n';
	boss.print();

	return 0;
}