#include "B1.h"

B1::B1(int b1 = 0) { this->b1 = b1; }
B1::~B1() {}

void B1::show_B1()
{
	cout << "Class B1" << endl;
	cout << "show_B1()" << endl;
	cout << "B1::b1 = " << b1 << endl;
}