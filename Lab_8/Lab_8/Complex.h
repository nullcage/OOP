#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex
{
public:
	double m_re;
	double m_im;

	Complex() { m_re = m_im = 0.0; }
	Complex(double re, double im)
		: m_re(re), m_im(im)
	{
	}

	friend std::istream& operator>> (std::istream& in, Complex& comp);

	~Complex() {}
};

#endif