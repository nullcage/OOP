#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human
{
protected:
	bool on_lesson;

public:
	Student() {}
	Student(std::string tsurname, std::string tname, std::string tmidname, int tage, bool ton_lesson);

	void print() override;

	~Student() {}
};

#endif