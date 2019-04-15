#include <iostream>
#include "Child.h"

void FIRST_TASK()
{
	std::cout << "\n================================= [ Задание #1 ] =================================\n";
	Child child1, child2;
	std::cout << "[ Ввод значений 1-го объекта ]\n";
	child1.enterChildInfo(); // ввод 
	std::cout << "[ Ввод значений 2-го объекта ]\n";
	child2.enterChildInfo(); // ввод 
	child1.printChildInfo(); // вывод
	child2.printChildInfo(); // вывод
	std::cout << "==================================================================================\n\n";
}

void Child::enterChildInfo()
{
	std::cout << "Введите имя, фамилию и возраст: ";
	std::cin >> m_name >> m_surname >> m_age;
	std::cout << '\n';
}

void Child::printChildInfo()
{
	std::cout << "Имя: " << m_name << '\n';
	std::cout << "Фамилия: " << m_surname << '\n';
	std::cout << "Возраст: " << m_age << "\n\n";
}