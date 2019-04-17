#include <iostream>
#include "Vector.h"

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

// Перегрузка оператора сравнения ==
bool operator== (const Vector& v1, const Vector& v2)
{
	return (v1.m_x == v2.m_x) && (v1.m_y == v2.m_y);
}

// Перегрузка оператора вывода <<
std::ostream& operator<< (std::ostream& out, const Vector& vect)
{
	out << "VECTOR(" << vect.m_x << ", " << vect.m_y << ")\n";
	return out;
}

// Перегрузка оператора ввода >> 
std::istream& operator>> (std::istream& in, Vector& vect)
{
	std::cout << "Введите координату X: ";
	in >> vect.m_x;
	std::cout << "Введите координату Y: ";
	in >> vect.m_y;
	return in;
}

// Перегрузка оператора присваивания =
Vector& Vector::operator= (const Vector &vector)
{
	m_x = vector.m_x;
	m_y = vector.m_y;
	return *this;
}