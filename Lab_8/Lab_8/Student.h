#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
protected:
	std::string m_surname;
	std::string m_name;
	std::string m_midname;

public:
	Student() {}
	Student(std::string surname, std::string name, std::string midname)
		: m_surname(surname), m_name(name), m_midname(midname)
	{
	}

	friend std::ostream& operator<< (std::ostream& out, const Student& stud);

	void enterStudentInfo();

	~Student() {}
};

#endif