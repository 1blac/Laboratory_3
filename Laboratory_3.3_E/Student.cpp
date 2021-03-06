#include "Man.h"
#include "Student.h"
#include <sstream>
void Student::Init(string name, int age, int weight, string gender, int yearOFstudy)
{
	Man::Init(name, age, weight, gender); // ?????? ???????? ??????
	setYearOFstudy(yearOFstudy);
}
void Student::Display() const
{
	cout << endl;
	cout << "man:" << endl;
	Man::Display(); // ?????? ???????? ??????
	cout << "yearOFstudy = " << yearOFstudy << endl;
}
void Student::Read()
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
Student::Student(const string name, const int age, const int weight, const string gender, const int yearOFstudy)
	: Man(name, age, weight, gender), yearOFstudy(yearOFstudy) // ?????? ???????? ????????????
{}
Student::Student(const Student& s)
	: Man(s) // ?????? ???????? ????????????
{
	yearOFstudy = s.yearOFstudy;
}
Student& Student::operator = (const Student& s)
{
	Man::operator = (s); // ?????? ???????? ??????????
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
Student::operator string () const
{
	stringstream ss;
	ss << "yearOFstudy = " << yearOFstudy << endl;
	return Man::operator string() + ss.str(); // ?????? ???????? ??????
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