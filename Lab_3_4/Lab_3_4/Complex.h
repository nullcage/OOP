#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	double re = 0.0;
	double im = 0.0;

	Complex() {} // empty constructor

	void enterComplex();
	void printComplexModule();
	void printComplexArguments();

	~Complex() {} // destructor
};

void THIRD_TASK();

#endif