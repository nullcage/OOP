#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
	double m_x, m_y;

	Vector(double x=0.0, double y=0.0) // constructor
		: m_x(x), m_y(y)
	{
	}

	double getVectorModule();
	void sumVector(Vector& a, Vector& b);
	void subVector(Vector& a, Vector& b);

	friend bool operator== (const Vector& v1, const Vector& v2);
	friend std::ostream& operator<< (std::ostream& out, const Vector& vect);
	friend std::istream& operator>> (std::istream& in, Vector& vect);
	Vector& operator= (const Vector &vector);

	~Vector() {} // destructor
};

#endif