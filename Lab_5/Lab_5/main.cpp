#include <iostream>
#include "Complex.h"
#include "Vector.h"

int main()
{
	system("chcp 1251");
	system("cls");

	// Демонстрация работы перегруженных операторов
	Complex testComplex;
	std::cin >> testComplex; // ввод комплексного числа
	std::cout << testComplex; // вывод комплексного числа
	std::cout << "Проверка работоспособности перегруженного оператора инкремента:\n";
	std::cout << ++testComplex;
	std::cout << '\n';

	Vector testVector;
	std::cin >> testVector; // ввод вектора
	std::cout << testVector; // вывод вектора
	std::cout << '\n';

	return 0;
}