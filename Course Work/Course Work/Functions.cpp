#include <iostream>
#include <Windows.h>
#include "Human.h"
#include <vector>
#include <conio.h>
#include <fstream>

std::vector<Human> human;

void displayMenu()
{
	std::cout << "-------------- ���� -----------------\n";
	std::cout << "1 - ������� ����� �������\n";
	std::cout << "2 - �������� � ������\n";
	std::cout << "3 - ������� �� ������\n";
	std::cout << "4 - ��������� � ����\n";
	std::cout << "5 - ��������� �� �����\n";
	std::cout << "6 - ����� �� ���������\n";
	std::cout << "-------------------------------------\n";
}

void printPage(int page)
{
	system("cls");
	std::cout << "                 �������� �����         ��������: " << page + 1 << '\n';
	std::cout << "----------------------------------------------------------------------------------\n";
	std::cout << "| ID  |     �������      |        ���       |   ����� ����������   |    �������   |\n";
	std::cout << "----------------------------------------------------------------------------------\n";
	
	unsigned int end = page * 10 + 10;
	if (end > human.size())
		end = human.size();
	for (unsigned int i = page * 10; i < end; ++i)
		human[i].print();

	std::cout << "----------------------------------------------------------------------------------\n";
	std::cout << "ESC - ����� 1 - ���������� �� ������� 2 - �� ����� 3 - �� ������ 4 - �� �������� PgUp/PgDown - ��������+/-\n";
}

int enterNumber(int min, int max)
{
	int number{ min - 1 };

	while (true)
	{
		std::cin >> number;
		if ((number >= min) && (number <= max))
			break;
		else
		{
			std::cout << "��������� ����!\n";

			std::cin.clear();
			while (std::cin.get() != '\n') {}
		}
	}
	return number;
}

void addHuman()
{
	system("cls");
	std::string tmp;
	Human tmpHuman;

	std::cout << "------ ���������� ������ �������� � �������� ����� ------\n";
	std::cout << "������� �������: ";
	std::cin >> tmp;
	tmpHuman.setSurname(tmp);

	std::cout << "������� ���: ";
	std::cin >> tmp;
	tmpHuman.setName(tmp);

	std::cout << "������� �����: ";
	std::cin >> tmp;
	tmpHuman.setAddress(tmp);

	std::cout << "������� ���������� �������: ";
	std::cin >> tmp;
	tmpHuman.setPhone(tmp);

	human.push_back(tmpHuman);
	std::cout << "������� ������� ��������!\n\n";
}

void deleteHuman()
{
	system("cls");
	std::string buffer;
	unsigned int n = 0;

	std::cout << "------ �������� ������������� �������� � �������� ����� ------\n";
	bool found{ false };
}

void displayAll()
{
	unsigned int t_size{ human.size() / 10 + 1 };
	bool stop{ false };
	int currentPage{ 0 };

	while (!stop)
	{
		printPage(currentPage);
		int button = _getch();
		if (button == 224)
			button = _getch() + 1000;

		switch (button)
		{
			case 49:
				currentPage = 0;
				break;
			case 50:
				currentPage = 0;
				break;
			case 51:
				currentPage = 0;
				break;
			case 52:
				currentPage = 0;
				break;
			case 1073:
				currentPage--;
				if (currentPage < (signed)t_size)
					currentPage = 0;
				break;
			case 1081:
				currentPage++;
				if (currentPage > (signed)t_size)
					currentPage = t_size;
				break;
			case 27:
				system("cls");
				stop = true;
				break;
		}
	}
}

bool dataFromFile(std::string filename)
{
	int size;
	FileStruct fs;
	std::ifstream fin(filename.c_str());
	if (fin.is_open())
	{
		human.clear();
		fin.read((char*)&size, sizeof(int));
		for (int i = 0; i < size; ++i)
		{
			Human temp;
			fin.read((char*)& fs, sizeof(FileStruct));
			temp.fromFileStruct(&fs);
			human.push_back(temp);
		}
		fin.close();
		return true;
	}
	return false;
}

void loadFromFile()
{
	std::string filename;
	std::cout << "������� �������� �����: ";
	std::cin >> filename;

	if (dataFromFile(filename))
	{
		system("cls");
		std::cout << "������� ��������.\n";
	}
	else
	{
		system("cls");
		std::cout << "��������� ������ ��� ��������!\n";
	}
}

bool dataToFile(std::string filename)
{
	FileStruct fs;
	std::ofstream fout(filename.c_str(), std::ios_base::out | std::ios_base::binary);
	if (fout.is_open())
	{
		size_t size = human.size();
		fout.write((char*)& size, sizeof(int));
		for (size_t i = 0; i < size; i++)
		{
			memset(&fs, 0, sizeof(FileStruct));
			human[i].toFileStruct(&fs);
			fout.write((char*)& fs, sizeof(FileStruct));
		}
		fout.close();
		return true;
	}
	return false;
}

void saveToFile()
{
	std::string filename;
	std::cout << "������� �������� �����: ";
	std::cin >> filename;

	if (dataToFile(filename))
	{
		system("cls");
		std::cout << "������� �������.\n";
	}
	else
	{
		system("cls");
		std::cout << "��������� ������ ��� ����������!\n";
	}
}