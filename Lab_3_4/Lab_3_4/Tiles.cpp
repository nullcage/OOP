#include <iostream>
#include "Tiles.h"

void SECOND_TASK()
{
	std::cout << "\n================================= [ Задание #2 ] =================================\n";
	Tiles toilet{ "CoolPlitka", 2.5, 2.5, 100.0 };
	Tiles bathroom{ "Plitka v2", 3.2, 3.2, 100.0 };
	toilet.getTilesData(); // вывод значений
	bathroom.getTilesData(); // вывод значений
	std::cout << "==================================================================================\n\n";
}

void Tiles::getTilesData()
{
	std::cout << "Бренд: " << brand << '\n';
	std::cout << "Высота: " << size_h << " | Ширина: " << size_w << '\n';
	std::cout << "Цена: " << price << "р\n\n";
}