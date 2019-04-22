#include <iostream>
#include "Complex.h"

void Complex::printComplexModule()
{
	std::cout << "Модуль комплексного числа равен: " << abs(sqrt(re * re + im * im)) << "\n\n";
}

void Complex::printComplexArguments()
{
	std::cout << re << " + (" << im << ")i\n";
}

// Перегрузка оператора сравнения ==
bool operator== (const Complex& c1, const Complex& c2)
{
	return (c1.re == c2.re) && (c1.im == c2.im);
}

// Перегрузка оператора вывода <<
std::ostream& operator<< (std::ostream & out, const Complex & comp)
{
	out << "COMPLEX(" << comp.re << " + (" << comp.im << ")i)\n";
	return out;
}

// Перегрузка оператора ввода >>
std::istream& operator>> (std::istream & in, Complex & comp)
{
	std::cout << "Введите действительную часть: ";
	in >> comp.re;
	std::cout << "Введите мнимую часть: ";
	in >> comp.im;
	return in;
}

// Перегрузка оператора присваивания =
Complex& Complex::operator= (const Complex &complex)
{
	re = complex.re;
	im = complex.im;
	return *this;
}

// Перегрузка оператора инкремента ++ (prefix)
Complex& Complex::operator++()
{
	++re;
	++im;
	return *this;
}

// Перегрузка оператора декремента -- (prefix)
Complex& Complex::operator--()
{
	--re;
	--im;
	return *this;
}

// Перегрузка оператора инкремента ++ (postfix)
Complex Complex::operator++(int)
{
	Complex temp(re, im);
	re++;
	im++;
	return temp;
}

// Перегрузка оператора декремента -- (postfix)
Complex Complex::operator--(int)
{
	Complex temp(re, im);
	re--;
	im--;
	return temp;
}