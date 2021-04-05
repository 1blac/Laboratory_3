#include "Man.h"
#include "Student_private.h"
#include <sstream>
void Student_private::Init(string name, int age, int weight, string gender, int yearOFstudy)
{
	Man::Init(name, age, weight, gender); // виклик базового метода
	setYearOFstudy(yearOFstudy);
}
void Student_private::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	Man::Display(); // виклик базового метода
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student_private::Read()
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "weight = ? "; cin >> weight;
	cout << "gender = ? "; cin >> gender;

	int yearOFstudy;
	cout << endl;
	cout << "yearOFstudy = ? "; cin >> yearOFstudy;
	Init(name, age, weight, gender, yearOFstudy);
}
Student_private::Student_private(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: Man(name, age, weight, gender), yearOFstudy(yearOFstudy) // виклик базового конструктора
{}
Student_private::Student_private(const Student_private& s)
	: Man(s) // виклик базового конструктора
{
	yearOFstudy = s.yearOFstudy;
}
Student_private& Student_private::operator = (const Student_private& s)
{
	Man::operator = (s); // виклик базового присвоєння
	yearOFstudy = s.yearOFstudy;
	return *this;
}
ostream& operator << (ostream& out, const Student_private& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student_private& s)
{
	string name;
	int age;
	int weight;
	string gender;
	cout << endl;
	cout << "name = ? "; in >> name;
	cout << "age = ? "; in >> age;
	cout << "weight = ? "; in >> weight;
	cout << "gender = ? "; in >> gender;
	s.setName(name);
	s.setAge(age);
	s.setWeight(weight);
	s.setGender(gender);

	int yearOFstudy;
	cout << endl;
	cout << "yearOFstudy = ? "; in >> yearOFstudy;
	s.setYearOFstudy(yearOFstudy);
	return in;
}
Student_private::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return Man::operator string() + ss.str(); // виклик базового метода
}
bool Student_private::setChangeYearOFstudyPlus(int value)
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
Student_private& Student_private::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student_private& Student_private::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student_private Student_private::operator ++ (int)
{
	Student_private s(*this);
	yearOFstudy++;
	return s;
}
Student_private Student_private::operator -- (int)
{
	Student_private s(*this);
	yearOFstudy--;
	return s;
}
Student_private::~Student_private(void)
{}