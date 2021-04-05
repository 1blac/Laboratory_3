#include "Man.h"
#include "Student_public.h"
#include <sstream>
void Student_public::Init(string name, int age, int weight, string gender, int yearOFstudy)
{
	Man::Init(name, age, weight, gender); // ������ �������� ������
	setYearOFstudy(yearOFstudy);
}
void Student_public::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	Man::Display(); // ������ �������� ������
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student_public::Read()
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
	Init(name, age, weight, gender,yearOFstudy);
}
Student_public::Student_public(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: Man(name, age, weight, gender), yearOFstudy(yearOFstudy) // ������ �������� ������������
{}
Student_public::Student_public(const Student_public& s)
	: Man(s) // ������ �������� ������������
{
	yearOFstudy = s.yearOFstudy;
}
Student_public& Student_public::operator = (const Student_public& s)
{
	Man::operator = (s); // ������ �������� ���������
	yearOFstudy = s.yearOFstudy;
	return *this;
}
bool Student_public::setChangeYearOFstudyPlus(int value)
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
ostream& operator << (ostream& out, const Student_public& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Student_public& s)
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
Student_public::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return Man::operator string() + ss.str(); // ������ �������� ������
}
Student_public& Student_public::operator ++ ()
{
	++yearOFstudy;
	return *this;
}
Student_public& Student_public::operator -- ()
{
	--yearOFstudy;
	return *this;
}
Student_public Student_public::operator ++ (int)
{
	Student_public s(*this);
	yearOFstudy++;
	return s;
}
Student_public Student_public::operator -- (int)
{
	Student_public s(*this);
	yearOFstudy--;
	return s;
}
Student_public::~Student_public(void)
{}