#include <iostream>
#include "Rational_public.h"

using namespace std;

int main()
{
    cout << "count = " << Rational::Count() << endl;
    Rational l, r;
    Rational_public D(0, 0);
    l.setA(0);
    l.setB(0);
    r.setA(0);
    r.setB(0);
    l.Read();
    l.Display();
    r.Read();
    r.Display();
    double x = l.value();
    cout << " " << endl;
    cout << "value = " << x << endl;
    cout << " " << endl;
    cout << "Add operation:" << endl;
    cout << "add = ( " << D.add(l, r) << " , " << D.add_2(l, r) << " )" << endl << endl;
    cout << "Subtraction operation:" << endl;
    cout << "sub = ( " << D.sub(l, r) << " , " << D.sub_2(l, r) << " )" << endl << endl;
    cout << "Multiplication operation:" << endl;
    cout << "mul = ( " << D.mul(l, r) << " , " << D.mul_2(l, r) << " )" << endl << endl;
    cout << " " << endl;
    cout << "count = " << Rational::Count() << endl;


    cin.get();
    return 0;
}