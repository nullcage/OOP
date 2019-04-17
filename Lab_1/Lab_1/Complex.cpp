#include <cassert> // for assert()
#include <iostream>
#include "Complex.h"

Complex addComplex(const Complex &x, const Complex &y)
{
	Complex answer;
	answer.re = x.re + y.re;
	answer.im = x.im + y.im;
	return answer;
}

Complex subtractComplex(const Complex &x, const Complex &y)
{
	Complex answer;
	answer.re = x.re - y.re;
	answer.im = x.im - y.im;
	return answer;
}

Complex multiplyComplex(const Complex &x, const Complex &y)
{
	Complex answer;
	answer.re = x.re * y.re - x.im * y.im;
	answer.im = x.re * y.im + x.im * y.re;
	return answer;
}

Complex divideComplex(const Complex &x, const Complex &y)
{
	assert((y.re != 0) && (y.im != 0));
	Complex answer;
	answer.re = (x.re * y.re + x.im * y.im) / (y.re * y.re + y.im * y.im);
	answer.im = (x.im * y.re - x.re * y.im) / (y.re * y.re + y.im * y.im);
	return answer;
}