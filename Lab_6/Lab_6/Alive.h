#ifndef ALIVE_H
#define ALIVE_H

class Alive
{
private:
	bool m_alive;
	int m_age;

public:
	Alive(bool alive = false, int age = 0)
		: m_alive(alive), m_age(age)
	{
	}

	const bool &isAlive() const;
	void switchAliveStatus();
};

class Bird : public Alive 
{
private:
	std::string m_Bname;

public:
	Bird(std::string name = "", bool alive = false, int age = 0)
		: m_Bname(name), Alive(alive, age)
	{
	}
};

class Fish : public Alive
{
private:
	std::string m_Fname;

public:
	Fish(std::string name = "", bool alive = false, int age = 0)
	: m_Fname(name), Alive(alive, age)
	{
	}
};

class Animal : public Alive 
{
private:
	std::string m_Aname;

public:
	Animal(std::string name = "", bool alive = false, int age = 0)
		: m_Aname(name), Alive(alive, age)
	{
	}

	const std::string &getAnimalName() const;
	void setAnimalName(const std::string name);
};

class Dog : public Animal
{
private:
	int m_Dlegs;

public:
	Dog(std::string name = "", bool alive = false, int age = 0, int legs = 0)
		: m_Dlegs(legs), Animal(name, alive, age)
	{
	}
};

class Cat : public Animal
{
private:
	int m_Clegs;

public:
	Cat(std::string name = "", bool alive = false, int age = 0, int legs = 0)
		: m_Clegs(legs), Animal(name, alive, age)
	{
	}
};

#endif