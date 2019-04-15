#include <iostream>
#include "Vector.h"

void FOURTH_TASK()
{
	std::cout << "\n================================= [ Задание #4 ] =================================\n";
	Vector test1{ 5.0, 3.2 };
	Vector test2{ 2.1, 3.3 };
	std::cout << "Начальные значения двух векторов: (5.0, 3.2), (2.1, 3.3)\n\n";
	Vector sum;
	Vector sub;
	sum.sumVector(test1, test2);
	sub.subVector(test1, test2);
	std::cout << "Сумма двух векторов равна: (" << sum.m_x << ", " << sum.m_y << ")\n";
	std::cout << "Разность двух векторов равна: (" << sub.m_x << ", " << sub.m_y << ")\n";
	std::cout << "==================================================================================\n\n";
}

double Vector::getVectorModule()
{
	double sum = 0;
	sum += m_x * m_x + m_y * m_y;
	return sum;
}

void Vector::sumVector(Vector& a, Vector& b)
{
	m_x = a.m_x + b.m_x;
	m_y = a.m_y + b.m_y;
}

void Vector::subVector(Vector& a, Vector& b)
{
	m_x = a.m_x - b.m_x;
	m_y = a.m_y - b.m_y;
}