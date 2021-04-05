#include "Student_public.h"
#include "Student_private.h"
using namespace std;
int main()
{
	Student_public s1;
	Student_public s4("Orest", 19, 69, "Male", 2);
	cout << s4 << endl;
	s1 = ++s4;
	cout << s1 << endl;
	cout << s4 << endl;
	s1 = s4++;
	cout << s1 << endl;
	cout << s4 << endl;
	cin >> s1;
	cin >> s4;
	cout << s1 << endl;
	cout << s4++ << endl;
	s4.setChangeYearOFstudyPlus(1);
	cout << "ChangeYearOFstudyPlus: " << s4.getYearOFstudy() << endl;
	return 0;
}