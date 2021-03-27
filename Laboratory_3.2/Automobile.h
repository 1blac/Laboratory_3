#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;



class Automobile
{
private:
	const char* brand;
	string colour;
	double engine_capacity;
    int power;
public:
	

	void SetBrand(const char*);
	void SetEngine_capacity(double);
	void SetPower(int);
	void SetColour(string);

	const char* GetBrand() const;
	double GetEngine_capacity() const;
	int GetPower() const;
	string GetColour() const;

	Automobile();
	Automobile(const char*, string, double, int );
	Automobile(const Automobile&);

	~Automobile();

	operator string() const;
	friend ostream& operator << (ostream&, const Automobile&);
	friend istream& operator >> (istream&, Automobile&);
};

