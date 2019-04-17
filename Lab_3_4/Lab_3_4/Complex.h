#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	double re = 0.0;
	double im = 0.0;

	Complex() {} // default constructor

	Complex(double c_re, double c_im) // initialize constructor
		: re(c_re), im(c_im)
	{
	}

	Complex(const Complex &copy) // copy constructor
	{
		re = copy.re;
		im = copy.im;
	}

	void enterComplex();
	void printComplexModule();
	void printComplexArguments();

	~Complex() {} // destructor
};

void THIRD_TASK();

#endif