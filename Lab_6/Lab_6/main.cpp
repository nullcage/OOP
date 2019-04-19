#include <iostream>
#include "Student.h"
#include "Alive.h"

int main()
{
	system("chcp 1251");
	system("cls");

	// 6_1
	std::cout << "[ Задание #1 ]\n";
	Student foo{ "Денис", "Ионычев", 18 };
	std::cout << "Студент: " << foo.getStudentName() << " " << foo.getStudentSurname() << '\n';
	Headman bar{ "Арина", "Кужахметова", 18, "asd@gmail.com" };
	std::cout << "Староста: " << bar.getStudentName() << " " << bar.getStudentSurname() << " (почта: " << bar.getHeadmanMail() << ")\n\n";

	// 6_2
	std::cout << "[ Задание #2 ]\n";
	Animal elephant{ "Слоняра", true, 3 };
	std::cout << elephant.getAnimalName() << " жив: ";
	switch (elephant.isAlive())
	{
		case false: 
			std::cout << "Нет\n";
			break;
		case true: 
			std::cout << "Да\n";
			break;
	}
	elephant.switchAliveStatus();
	std::cout << elephant.getAnimalName() << " умер...\n";
	std::cout << elephant.getAnimalName() << " жив: ";
	switch (elephant.isAlive())
	{
	case false: 
		std::cout << "Нет\n";
		break;
	case true: 
		std::cout << "Да\n";
		break;
	}

	return 0;
}