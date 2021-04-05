#include "Rational.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

void Rational::Display()
{
	cout << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
void Rational::Init(double A, double B)
{
	a = A;
	b = B;
}
void Rational::Read()
{
	double A, B;
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	cout << " b = "; cin >> B;
	Init(A, B);
}
Rational::Rational()
	: a(0), b(0)
{}
Rational::Rational(const double a, const double b)
	: a(a), b(b)
{}
Rational::Rational(const Rational& m)
	: a(m.a), b(m.b)
{}
Rational& Rational::operator = (const Rational& m)
{
	this->a = m.a;
	this->b = m.b;
	return *this;
}
Rational::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rational& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Rational& s)
{

	double a;
	double b;
	cout << endl;
	cout << "a = ? "; in >> a;
	cout << "b = ? "; in >> b;
	s.setA(a);
	s.setB(b);

	return in;
}
void Rational::setA(double value)
{
	a = value;
}
void Rational::setB(double value)
{
	b = value;
}
double Rational::value()
{
	return 1. * a / b;
}
Rational::~Rational(void)
{}