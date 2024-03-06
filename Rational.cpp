#include "Rational.h"
#include <iostream>

void Rational::setNumerator(int num)
{
	this->numerator = num;
}

void Rational::setDenominator(int denum)
{
	if (denum != 0)
	{
		this->denominator = denum;
	}
}

int Rational::getNumerator() const
{
	return this->numerator;
}

int Rational::getDenominator() const
{
	return this->denominator;
}

Rational::Rational()
{
}

Rational::Rational(int num, int denum)
{
	this->numerator = num;
	this->denominator = denum;
}

double Rational::add(int num, int denum) const
{
	double result = 0;
	double num1 = (double)getNumerator() / getDenominator();
	double num2 = (double)num / denum;

	result = num1 + num2;

	return result;
}

double Rational::add(const Rational& num) const
{
	double result = ((double)getNumerator() / getDenominator()) + ((double)num.getNumerator() / num.getDenominator());
}

double Rational::sub(int num, int denum) const
{
	double result = 0;
	double num1 = (double)getNumerator() / getDenominator();
	double num2 = (double)num / denum;

	result = num1 - num2;

	return result;
}

double Rational::sub(const Rational& num) const
{
	double result = ((double)getNumerator() / getDenominator()) - ((double)num.getNumerator() / num.getDenominator());
	return result;
}

double Rational::multiply(int num, int denum) const
{
	double result = 0;
	int newNum, newDenum;

	newNum = getNumerator() * num;
	newDenum = getDenominator() * denum;

	if (newDenum != 0)
	{
		result = (double)newNum / newDenum;
	}

	return result;
}

double Rational::multiply(const Rational& num) const
{
	double result = ((double)getNumerator() / getDenominator()) * ((double)num.getNumerator()/num.getDenominator());
	return result;
}

double Rational::divide(int num, int denum) const
{
	double result = 0;
	int newNum, newDenum;

	newNum = getNumerator() * denum;
	newDenum = getDenominator() * num;

	if (newDenum != 0)
	{
		result = (double)newNum / newDenum;
	}

	return result;
}

double Rational::divide(const Rational& num) const
{
	double result = ((double)getNumerator() / getDenominator()) / ((double)num.getNumerator() / num.getDenominator());
	return result;
}

Rational Rational::add1(const Rational& num) const
{
	return Rational();
}

Rational Rational::sub1(const Rational& num) const
{
	return Rational();
}

Rational Rational::multiply1(const Rational& num) const
{
	Rational result;

	result.setNumerator(this->numerator * num.numerator);
	result.setDenominator(this->denominator * num.denominator);

	return result;
}

Rational Rational::divide1(const Rational& num) const
{
	Rational result;

	result.setNumerator(this->numerator * num.denominator);
	result.setDenominator(this->denominator * num.numerator);

	return result;
}

void Rational::print() const
{
	double result = 0;
	result = getNumerator() / getDenominator();

	std::cout << result << std::endl;
}
