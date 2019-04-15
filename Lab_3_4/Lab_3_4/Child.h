#ifndef CHILD_H
#define CHILD_H

#include <iostream>
#include <string>

class Child
{
private:
	std::string m_name;
	std::string m_surname;
	int m_age;

public:
	Child() : m_name("Unnamed"), m_surname("Unnamed"), m_age(0) { } // initialize constructor
	Child(const Child& copy) // copy constructor
	{
		m_name = copy.m_name;
		m_surname = copy.m_surname;
		m_age = copy.m_age;
	}

	void enterChildInfo();
	void printChildInfo();

	~Child() { } // empty destructor
};

void FIRST_TASK();

#endif