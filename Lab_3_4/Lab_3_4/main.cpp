#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

int main()
{
	system("chcp 1251");
	system("cls");

	int taskNumber{ -1 };
	do
	{
		std::cout << "Введите номер желаемого задания: ";
		std::cin >> taskNumber;

		switch (taskNumber)
		{
			case 0:
				break;
			case 1:
				FIRST_TASK();
				break;
			case 2:
				SECOND_TASK();
				break;
			case 3:
				THIRD_TASK();
				break;
			case 4:
				FOURTH_TASK();
				break;
			default:
				std::cerr << "Введён некорректный номер задания!\n\n";
				break;
		}
	} while (taskNumber != 0);
	return 0;
}