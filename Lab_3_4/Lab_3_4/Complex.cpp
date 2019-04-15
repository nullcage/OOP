#include <iostream>
#include "Complex.h"

void THIRD_TASK()
{
	std::cout << "\n================================= [ Задание #3 ] =================================\n";
	Complex x, y;
	x.enterComplex(); // ввод числа
	x.printComplexArguments(); // вывод аргументов
	x.printComplexModule(); // вывод модуля
	std::cout << "==================================================================================\n\n";
}

void Complex::printComplexModule()
{
	std::cout << "Модуль комплексного числа равен: " << abs(sqrt(re * re + im * im)) << "\n\n";
}

void Complex::printComplexArguments()
{
	std::cout << re << " + (" << im << ")i\n";
}

void Complex::enterComplex()
{
	std::cout << "Введите комплексное число: ";
	std::cin >> re >> im;
	std::cout << '\n';
}