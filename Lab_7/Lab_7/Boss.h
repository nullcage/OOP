#ifndef BOSS_H
#define BOSS_H

#include "Human.h"

class Boss : public Human
{
protected:
	int number_of_workers;

public:
	virtual void print() { std::cout << "Boss\n"; }
};

#endif