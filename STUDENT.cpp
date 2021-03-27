#include "MAN.h"
#include "STUDENT.h"
#include <sstream>
void Student::Init(int yearOFstudy, Man man)
{
	setYearOFstudy(yearOFstudy);
	setMan(name, age, weight, gender);
}
void Student::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	man.Display(); // використовуємо делегування
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student::Read()
{
	int yearOFstudy;
	Man m;
	cout << endl;
	cout << "Man: " << endl;
	m.Read(); // використовуємо делегування
	cout << "yearOFstudy = ? "; cin >> yearOFstudy;
	Init(yearOFstudy, m);
}
bool Student::setChangeYearOFstudyPlus(int value)
{
	if (yearOFstudy + value > 5)
	{
		cout << "inavid value for the year of study" << endl;
		return false;
	}
	else
	{
		yearOFstudy += value;
		return true;
	}
}

Student::Student(const string name, const string gender)
{
	setName(name), setGender(gender);
}
Student::Student(const int age, const int weight)
{
	setAge(age), setWeight(weight);
}
Student::Student(const string name, const int age, const int weight, const string gender)
{
	setName(name), setAge(age), setWeight(weight), setGender(gender);
}
Student::Student(const Man& m)	
{
	setName(m.name), setAge(m.age), setWeight(m.weight), setGender(m.gender);
}
Student::Student(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
{
	setMan(name, age, weight, gender), setYearOFstudy(yearOFstudy);
}
Student::Student(const Student& s)
{
	man = s.man;
	yearOFstudy = s.yearOFstudy;
}
Student& Student::operator = (const Student& s)
{
	man = s.man;
	yearOFstudy = s.yearOFstudy;
	return *this;
}
ostream& operator << (ostream& out, const Student& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student& s)
{
	int yearOFstudy;
	cout << endl;
	cout << "man = ? "; in >> s.man;
	cout << "yearOFstudy = ? "; in >> yearOFstudy;
	s.setYearOFstudy(yearOFstudy);
	return in;
}
Student::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return string(man) + ss.str();
}
Student& Student::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student& Student::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student Student::operator ++ (int)
{
	Student s(*this);
	yearOFstudy++;
	return s;
}
Student Student::operator -- (int)
{
	Student s(*this);
	yearOFstudy--;
	return s;
}
Student::~Student(void)
{}