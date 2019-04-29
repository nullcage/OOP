#include <iostream>
#include <ctime>
#include "Functions.h"

const int GLOBAL_ARRAY_SIZE = 5;

int main()
{
	system("chcp 1251");
	system("cls");
	srand((unsigned)time(NULL));

	// Заполнение массива случайными числами
	int array[GLOBAL_ARRAY_SIZE];
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		array[i] = (rand() % 10) + 1;

	std::cout << "Начальный массив: ";
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		std::cout << array[i] << " ";
	std::cout << "\n";


	std::cout << "\n[ Задание #1 ]\n";
	int (*pointer)(int[]) = &sum;
	std::cout << "Сумма элементов массива равна: " << pointer(array) << '\n';
	pointer = &mult;
	std::cout << "Произведение элементов массива равно: " << pointer(array) << '\n';

	std::cout << "\n[ Задание #2 ]\n";
	void (*bar)(int[]) = foo(array);
	bar(array);
	std::cout << "Итоговый массив: ";
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		std::cout << array[i] << " ";
	std::cout << '\n';

	return 0;
}