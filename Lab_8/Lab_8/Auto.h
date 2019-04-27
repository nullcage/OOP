#ifndef AUTO_H
#define AUTO_H

#include <string>

class Auto
{
protected:
	std::string m_autoName;
	std::string m_ownerName;

public:
	Auto() {}
	Auto(std::string autoName, std::string ownerName)
		: m_autoName(autoName), m_ownerName(ownerName)
	{
	}

	friend std::ostream& operator<< (std::ostream& out, const Auto& car);

	~Auto() {}
};

#endif