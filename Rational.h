#ifndef RATIONAL_H_
#define RATIONAL_H_
class Rational
{
private:
	int numerator;
	int denominator;
public:
	void setNumerator(int num);
	void setDenominator(int denum);

	int getNumerator() const;
	int getDenominator() const;


	Rational();
	Rational(int num, int denum);

	double add(int num, int denum) const;
	double add(const Rational& num) const;
	double sub(int num, int denum) const;
	double sub(const Rational& num) const;
	double multiply(int num, int denum) const;
	double multiply(const Rational& num) const;
	double divide(int num, int denum) const;
	double divide(const Rational& num) const;

	Rational add1(const Rational& num) const;
	Rational sub1(const Rational& num) const;
	Rational multiply1(const Rational& num) const;
	Rational divide1(const Rational& num) const;

	void print() const;
};
#endif

