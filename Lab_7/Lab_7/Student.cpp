#include "Student.h"
#include <iostream>

Student::Student(std::string tsurname, std::string tname, std::string tmidname, int tage, bool ton_lesson)
{
	surname = tsurname;
	name = tname;
	midname = tmidname;
	age = tage;
	on_lesson = ton_lesson;
}

void Student::print()
{
	std::cout << "[Данные о студенте]\nФИО: " << surname << " " << name << " " << midname << "\nВозраст: " << age << "\nСтатус: ";
	if(on_lesson)
		std::cout << "На паре\n";
	else
		std::cout << "Отсутствует\n";
}