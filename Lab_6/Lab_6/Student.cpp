#include <string>
#include "Student.h"

const std::string &Student::getStudentName() const
{
	return m_name;
}

void Student::setStudentName(const std::string name)
{
	m_name = name;
}

const std::string &Student::getStudentSurname() const
{
	return m_surname;
}

void Student::setStudentSurname(const std::string surname)
{
	m_surname = surname;
}

const std::string &Headman::getHeadmanMail() const
{
	return m_mail;
}

void Headman::setHeadmanMail(const std::string mail)
{
	m_mail = mail;
}