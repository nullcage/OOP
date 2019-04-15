#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
	double m_x, m_y;

	Vector(double x, double y) // constructor
	{
		m_x = x;
		m_y = y;
	}
	Vector() // second constructor if no arguments passed
	{
		m_x = 0;
		m_y = 0;
	}

	double getVectorModule();
	void sumVector(Vector& a, Vector& b);
	void subVector(Vector& a, Vector& b);

	~Vector() {} // destructor
};

void FOURTH_TASK();

#endif