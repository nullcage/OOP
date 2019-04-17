#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
	double m_x;
	double m_y;

	Vector() {} // default constructor

	Vector(double x, double y) // initialize constructor
		: m_x(x), m_y(y)
	{
	}

	Vector(const Vector &copy) // copy constructor
	{
		m_x = copy.m_x;
		m_y = copy.m_y;
	}

	double getVectorModule();
	void sumVector(Vector& a, Vector& b);
	void subVector(Vector& a, Vector& b);

	~Vector() {} // destructor
};

void FOURTH_TASK();

#endif