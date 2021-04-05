#include "D3.h"

D3::D3(int d3 = 0, int b3 = 0) : B3(b3) { this->d3 = d3; }
D3::~D3() {}

void D3::show_D3()
{
	cout << "Class D3" << endl;
	show_B3();
	cout << "show_D3()" << endl;
	cout << "D3::d3 = " << d3 << endl;
}