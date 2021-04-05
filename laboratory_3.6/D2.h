#pragma once
#include "D1.h"
#include "D3.h"
class D2 :private D3, public D1
{
private:
	int d2;
public:
	D2(int, int, int, int, int, int);
	~D2();

	void show_D2();
};
