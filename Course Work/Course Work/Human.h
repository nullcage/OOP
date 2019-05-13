#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

struct FileStruct
{
	char name[24];
	char surname[24];
	char address[36];
	char phone[16];
};

class Human
{
private:
	std::string m_name;
	std::string m_surname;
	std::string m_address;
	std::string m_phone;
	static int s_idGenerator;
	int m_id;

public:
	Human() { m_id = s_idGenerator++; }
	~Human() {}

	std::string getName() { return m_name; }
	void setName(std::string name) { m_name = name; }
	std::string getSurname() { return m_surname; }
	void setSurname(std::string surname) { m_surname = surname; }
	std::string getAddress() { return m_address;  }
	void setAddress(std::string address) { m_address = address; }
	std::string getPhone() { return m_phone; }
	void setPhone(std::string phone) { m_phone = phone; }

	void fromFileStruct(FileStruct* fs);
	void toFileStruct(FileStruct* fs);

	void print();
};