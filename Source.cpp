#include "STUDENT.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student s1;
	Student s4("Orest", 19, 69, "Male", 2);
	cin >> s1;
	cin >> s4;
	cout << s1 << endl;
	cout << s4 << endl;
	s4.setChangeYearOFstudyPlus(1);
	cout << "ChangeYearOFstudyPlus: " << s4.getYearOFstudy() << endl;
	return 0;
}