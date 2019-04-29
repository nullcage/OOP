#ifndef BOSS_H
#define BOSS_H

#include "Human.h"

class Boss : public Human
{
protected:
	int number_of_workers;

public:
	Boss() {}
	Boss(std::string tsurname, std::string tname, std::string tmidname, int tage, int tnumber_of_workers);

	void print() override;

	~Boss() {}
};

#endif