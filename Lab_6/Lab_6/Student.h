#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
	std::string m_name;
	std::string m_surname;
	int m_age;

public:
	Student(std::string name = "", std::string surname = "", int age = 0)
		: m_name(name), m_surname(surname), m_age(age)
	{
	}

	const std::string &getStudentName() const;
	void setStudentName(const std::string name);

	const std::string& getStudentSurname() const;
	void setStudentSurname(const std::string surname);
};

class Headman : public Student
{
private:
	std::string m_mail;

public:
	Headman(std::string name = "", std::string surname = "", int age = 0, std::string mail = "")
		: Student(name, surname, age), m_mail(mail)
	{
	}

	const std::string &getHeadmanMail() const;
	void setHeadmanMail(const std::string mail);
};

#endif