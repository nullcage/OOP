﻿#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
protected:
	std::string surname;
	std::string name;
	std::string midname;
	int age;

public:
	Human(){}
	Human(std::string tsurname, std::string tname, std::string tmidname, int tage)
		: surname(tsurname), name(tname), midname(tmidname), age(tage)
	{
	}

	virtual void print() = 0;

	~Human() {}
};

#endif