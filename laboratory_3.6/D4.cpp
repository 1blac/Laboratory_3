#include "D4.h"

D4::D4(int d4 = 0, int b1 = 0, int b2 = 0, int b3 = 0, int d1 = 0, int d3 = 0, int d2 = 0) : D2(d2, d1, b1, b2, b3, d3) { this->d4 = d4; }
D4::~D4() {}

void D4::show_D4()
{
	cout << "Class D4" << endl;
	show_D2();
	cout << "show_D4()" << endl;
	cout << "D4::d4 = " << d4 << endl;
}