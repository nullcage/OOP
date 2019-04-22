#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	double re = 0.0;
	double im = 0.0;

	Complex(double c_re=0.0, double c_im=0.0) // constructor
		: re(c_re), im(c_im)
	{
	}

	void printComplexModule();
	void printComplexArguments();

	friend bool operator== (const Complex& c1, const Complex& c2);
	friend std::ostream& operator<< (std::ostream& out, const Complex& comp);
	friend std::istream& operator>> (std::istream& in, Complex& comp);
	Complex& operator= (const Complex &complex);
	Complex& operator++(); // prefix
	Complex& operator--(); // prefix
	Complex operator++(int); // postfix
	Complex operator--(int); // postfix

	~Complex() {} // destructor
};

#endif