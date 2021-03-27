#pragma once
#include <iostream>
#include "MAN.h"
class Student : public Man
{
public:
	int yearOFstudy;
	Man man;
public:
	int getYearOFstudy() const { return yearOFstudy; }
	Man getMan() const { return man; }
	void setYearOFstudy(int year) 
	{
		if (year > 5 || year < 0)
		{
			int R = 0;

			system("color 4F ");
			system("color 4F ");
			std::cout << "Рік навчання може бути лише від одного до п'яти,введіть інше значання" << std::endl;
			std::cout << " Year of Study: ";
			system("color 0F ");
			std::cin >> R;
			setYearOFstudy(R);
		}
		else
		{
			yearOFstudy = year;
		}
		this->yearOFstudy = yearOFstudy; 
	}
	void setMan(string name, int age, int weight, string gender) { this->man = man; }
	void setName(string name) { this->name = name; }
	void setAge(int Age) 
	{ 
		this->age = age; 
	}
	void setWeight(int weight) { this->weight = weight; }
	void setGender(string gender) { this->gender = gender; }
	bool setChangeYearOFstudyPlus(int);
	void Init(int yearOFstudy, Man man);
	void Display() const;
	void Read();
	Student(const string name, const string gender);
	Student(const int age, const int weight);
	Student(const string name, const int age, const int weight, const string gender);
	Student(const Man& m);
	Student(const string name = "", const int age = 0, const int weight = 0, const string gender = "", const int yearOFstudy = 0);
	Student(const Student& s);
	Student& operator = (const Student& s);
	friend ostream& operator << (ostream& out, const Student& s);
	friend istream& operator >> (istream& in, Student& s);
	operator string () const;
	Student& operator ++ ();
	Student& operator -- ();
	Student operator ++ (int);
	Student operator -- (int);
	~Student(void);
};
