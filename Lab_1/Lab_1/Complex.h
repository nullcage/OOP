#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex
{
	double re = 0.0;
	double im = 0.0;
};

void enterComplexNumber();
Complex addComplex(const Complex &x, const Complex &y);
Complex subtractComplex(const Complex &x, const Complex &y);
Complex multiplyComplex(const Complex &x, const Complex &y);
Complex divideComplex(const Complex &x, const Complex &y);

#endif 