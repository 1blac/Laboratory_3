#pragma once
#include "B1.h"
#include "B2.h"
#include "B3.h"
class D1 :private B1, public B2, protected B3
{
private:
	int d1;
public:
	D1(int, int, int, int);
	~D1();

	void show_D1();
};
