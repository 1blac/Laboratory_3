#pragma once
#include <string>
#include <iostream>
using namespace std;
class Man
{
public:
	string name;
	int age;
	int weight;
	string gender;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	int getWeight() const { return weight; }
	string getGender() const { return gender; }
	void setName(string name) { this->name = name; }
	void setAge(int Age) 
	{ 
		if (Age > 118 || Age < 16)
		{
			int k = 0;

			system("color 4F ");
			system("color 4F ");
			std::cout << "Діапазон віку вді 16 до 118 років.Спробуйте ще раз" << std::endl;
			std::cout << " age: ";
			system("color 0F ");
			std::cin >> k;
			setAge(k);
		}
		else
		{
			age = Age;
		}
		this->age = age; 
	}
	void setWeight(int Weight) 
	{ 
		if (Weight > 469 || Weight < 10)
		{
			int f = 0;

			system("color 4F ");
			system("color 4F ");
			std::cout << "Діапазон ваги від 10 до 469 кілограмів.Спробуйте ще раз" << std::endl;
			std::cout << " weight: ";
			system("color 0F ");
			std::cin >> f;
			setWeight(f);
		}
		else
		{
			weight = Weight;
		}
		this->weight = weight; 
	}
	void setGender(string gender) { this->gender = gender; }
	void Init(string name, int age, int weight, string gender);
	void Display() const;
	void Read();
	Man();
	Man& operator = (const Man& m);
	friend ostream& operator << (ostream& out, const Man& m);
	friend istream& operator >> (istream& in, Man& m);
	operator string () const;
	Man& operator ++ ();
	Man& operator -- ();
	Man operator ++ (int);
	Man operator -- (int);
	~Man(void);
};
