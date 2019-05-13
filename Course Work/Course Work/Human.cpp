#include "Human.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

int Human::s_idGenerator = 0;

void Human::print()
{
	printf("| %-4d| %-16.16s | %-16.16s | %-20.20s | %-12.12s |\n", m_id, m_surname.c_str(), m_name.c_str(), m_address.c_str(), m_phone.c_str());
}

void Human::fromFileStruct(FileStruct* fs)
{
	m_name = fs->name;
	m_surname = fs->surname;
	m_address = fs->address;
	m_phone = fs->phone;
}

void Human::toFileStruct(FileStruct* fs)
{
	size_t size = m_name.size();
	if (size > 23)
		size = 23;
	memcpy((void*)fs->name, (void*)m_name.c_str(), size + 1);

	size = m_surname.size();
	if (size > 23)
		size = 23;
	memcpy((void*)fs->surname, (void*)m_surname.c_str(), size + 1);

	size = m_address.size();
	if (size > 35)
		size = 35;
	memcpy((void*)fs->address, (void*)m_address.c_str(), size + 1);

	size = m_phone.size();
	if (size > 15)
		size = 15;
	memcpy((void*)fs->phone, (void*)m_phone.c_str(), size + 1);
}