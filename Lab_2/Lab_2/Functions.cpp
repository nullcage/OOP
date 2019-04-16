#include <iostream>
#include "Functions.h"

const int GLOBAL_ARRAY_SIZE = 5;

int sum(int array[])
{
	int totalSum{ 0 };
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		totalSum += array[i];
	return totalSum;
}

int mult(int array[])
{
	int totalMult{ 1 };
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; ++i)
		totalMult *= array[i];
	return totalMult;
}

void option1(int array[]) // инвертировать массив
{
	std::cout << "Инвертируем массив...\n";
	int temp[GLOBAL_ARRAY_SIZE];
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; i++)
		temp[i] = array[GLOBAL_ARRAY_SIZE - i - 1];
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; i++) 
		array[i] = temp[i];
}

void option2(int array[]) // возрастающий порядок
{
	std::cout << "Сортируем массив по возрастанию...\n";
	int temp;
	for (int i = 0; i < GLOBAL_ARRAY_SIZE - 1; i++)
	{
		for (int j = 0; j < GLOBAL_ARRAY_SIZE - i - 1; j++)
		{
			if (array[j] > array[j + 1]) 
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void option3(int array[]) // убывающий порядок
{
	std::cout << "Сортируем массив по убыванию...\n";
	int temp;
	for (int i = 0; i < GLOBAL_ARRAY_SIZE - 1; i++) 
	{
		for (int j = 0; j < GLOBAL_ARRAY_SIZE - i - 1; j++) 
		{
			if (array[j] < array[j + 1]) 
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void (*foo(int array[]))(int[]) 
{
	int sum{ 0 };
	for (int i = 0; i < GLOBAL_ARRAY_SIZE; i++)
		sum += array[i];
	if (sum == array[0])
		return &option1;
	else if (sum > array[0])
		return &option2;
	else
		return &option3;
}