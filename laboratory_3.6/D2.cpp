#include "D2.h"

D2::D2(int d2 = 0, int b1 = 0, int b2 = 0, int b3 = 0, int d1 = 0, int d3 = 0) : D1(d1,b1,b2,b3), D3(d3,b3) { this->d2 = d2; }
D2::~D2() {}

void D2::show_D2()
{
	cout << "Class D2" << endl;
	show_D1();
	show_D3();
	cout << "show_D2()" << endl;
	cout << "D2::d2 = " << d2 << endl;
}