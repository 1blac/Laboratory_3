#include "B3.h"

B3::B3(int b3 = 0) { this->b3 = b3; }
B3::~B3() {}

void B3::show_B3()
{
	cout << "Class B3" << endl;
	cout << "show_B3()" << endl;
	cout << "B3::b3 = " << b3 << endl;
}