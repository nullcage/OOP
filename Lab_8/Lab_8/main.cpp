#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include <iterator>
#include "Student.h"
#include "Complex.h"
#include "Auto.h"

int main()
{
	system("chcp 1251");
	system("cls");

	// 8_1
	std::cout << "[ ******************** ЗАДАНИЕ №1 ******************** ]\n";
	int studentsCount;
	std::cout << "Введите количество студентов: ";
	std::cin >> studentsCount;
	std::vector<Student> students(studentsCount);

	for (int i = 0; i < static_cast<int>(students.size()); ++i)
		students[i].enterStudentInfo();

	std::cout << "[ Список студентов ]\n";
	for (int i = 0; i < static_cast<int>(students.size()); ++i)
	{
		std::cout << students[i];
		std::cout << '\n';
	}


	// 8_2
	std::cout << "\n[ ******************** ЗАДАНИЕ №2 ******************** ]\n";
	int complexCount;
	std::cout << "Введите количество комплексных чисел: ";
	std::cin >> complexCount;
	std::list<Complex> complex;

	for (int i = 0; i < complexCount; ++i)
	{
		Complex temp;
		std::cin >> temp;
		complex.push_back(temp);
	}

	std::cout << "Список комплексных чисел:\n";
	for (std::list<Complex>::iterator iter = complex.begin(); iter != complex.end(); ++iter)
		std::cout << iter->m_re << " + (" << iter->m_im << ")i\n";


	// 8_3
	std::cout << "\n[ ******************** ЗАДАНИЕ №3 ******************** ]\n";
	std::queue<Auto> autos;
	Auto car1{"Mercedes-Benz SLS", "Arnold Schwarzenegger"}, car2{"McLaren MP4-12C", "Liam Hemsworth"};
	autos.push(car1);
	autos.push(car2);
	std::cout << "Текущая очередь: " << autos.size() << " клиент(-ов)\n";
	std::cout << "Лидер очереди: " << autos.front() << '\n';
	std::cout << "Машина первого клиента в очереди была вымыта.\n";
	autos.pop();
	std::cout << "Осталось в очереди: " << autos.size() << " клиент(-ов)\n";
	std::cout << "Лидер очереди: " << autos.front() << '\n';
	return 0;
}