#pragma once
#include "Automobile.h"

class Truck : public Automobile
{
private:
	int load_capacity;
	const char* brand;
public:
	Truck();
	Truck(const char*, string, double, int);

	~Truck();

	void SetLoad_capacity(int);
	void Setbrand(const char*);

	int GetLoad_capacity() const;
	const char* Getbrand() const;

	friend ostream& operator << (ostream&, const Truck&);
	operator string() const;


};
