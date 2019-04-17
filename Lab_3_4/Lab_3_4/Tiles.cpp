#include <iostream>
#include "Tiles.h"

void SECOND_TASK()
{
	std::cout << "\n================================= [ Задание #2 ] =================================\n";
	Tiles toilet{ "Plitka that is worse", 2.0, 5.5, 120.5 };
	Tiles bathroom{ "Plitka that is better", 6.0, 4.0, 100.0 };
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