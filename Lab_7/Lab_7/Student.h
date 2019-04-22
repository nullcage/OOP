#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human
{
protected:
	bool on_lesson;

public:
	virtual void print() { std::cout << "Student\n"; }
};

#endif