#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <fstream>

void displayMenu();
void displayAll();
void printPage(int page);
int enterNumber(int min, int max);
bool dataFromFile(std::string filename);
bool dataToFile(std::string filename);
void addHuman();
void deleteHuman();

int main()
{
	system("chcp 1251");
	system("cls");

	bool exit{ false };

	while (true)
	{
		displayMenu();
		switch (enterNumber(1, 6))
		{
			case 1:
				displayAll();
				break;
			case 2:
				addHuman();
				break;
			case 3:
				deleteHuman();
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				exit = true;
				break;
		}
		if (exit)
			break;
	}
	return 0;
}