#include <string>
#include "Alive.h"

const bool &Alive::isAlive() const
{
	return m_alive;
}

void Alive::switchAliveStatus()
{
	m_alive = (m_alive) ? false : true;
}

const std::string &Animal::getAnimalName() const
{
	return m_Aname;
}

void Animal::setAnimalName(const std::string name)
{
	m_Aname = name;
}