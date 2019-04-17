#include <iostream>
#include <fstream>
#include <cmath>
#include "Complex.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Complex x{ };
	Complex y{ };
	char oper{ };

	std::cout << "[ Задание #1: Калькулятор комплексных чисел ]\n";
	std::cout << "Введите первое комплексное число: ";
	std::cin >> x.re >> x.im;
	std::cout << "Введите второе комплексное число: ";
	std::cin >> y.re >> y.im;
	do
	{
		std::cout << "Введите символ операции над числами: ";
		std::cin >> oper;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
	} while (oper != '+' && oper != '-' && oper != '*' && oper != '/');

	Complex addiction = addComplex(x, y);
	Complex subtraction = subtractComplex(x, y);
	Complex multiplication = multiplyComplex(x, y);
	Complex division = divideComplex(x, y);

	switch (oper)
	{
		case '+':
			std::cout << "Сумма: " << addiction.re << " + (" << addiction.im << ")i\n";
			break;
		case '-':
			std::cout << "Разность: " << subtraction.re << " + (" << subtraction.im << ")i\n";
			break;
		case '*':
			std::cout << "Произведение: " << multiplication.re << " + (" << multiplication.im << ")i\n";
			break;
		case '/':
			std::cout << "Частное: " << division.re << " + (" << division.im << ")i\n";
			break;
	}

	std::cout << "\n[ Задание #2: Чтение комплексных чисел из файла ]\n";
	std::cout << "Чтение комплексных чисел из файла complex.txt...\n";
	std::ifstream file;
	file.open("complex.txt");
	if (!file.is_open()) 
		std::cerr << "[Ошибка] Файл не найден!";
	else 
	{
		double buffer, max = INT16_MIN;
		int maxIndex;
		file >> buffer;
		int n = static_cast<int>(buffer);
		std::cout << "Количество комплексных чисел: " << n << '\n';
		Complex* p = new Complex[n];
		for (int i = 0; i < n; i++) 
		{
			file >> buffer;
			p[i].re = buffer;
			file >> buffer;
			p[i].im = buffer;
			std::cout << i + 1 << " число: " << p[i].re << " + (" << p[i].im << ")i\n";

			if (sqrt(p[i].re * p[i].re + p[i].im * p[i].im) > max) 
			{
				max = sqrt(p[i].re * p[i].re + p[i].im * p[i].im);
				maxIndex = i;
			}
		}
		std::cout << "Комплексное число с максимальным модулем: " << p[maxIndex].re << " + (" << p[maxIndex].im << ")i\n";
		std::cout << "Модуль равен: " << max << '\n';
	}
	file.close();
	return 0;
}