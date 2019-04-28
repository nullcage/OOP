#include "Student.h"
#include <iostream>
#include <string>

std::ostream& operator<< (std::ostream& out, const Student& stud)
{
	out << stud.m_surname << " " << stud.m_name << " " << stud.m_midname;
	return out;
}

void Student::enterStudentInfo()
{
	std::cout << "Введите ФИО студента: ";
	std::cin >> m_surname >> m_name >> m_midname;
}