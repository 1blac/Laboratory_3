#include <iostream>
#include "D4.h"

int main()
{
    B1 ob1(1);
    cout << "\n\nB1 ob1(1)" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << "Hierarchy of class B1" << endl;
    ob1.show_B1();

    B2 ob2(3);
    cout << "\n\nB2 ob2(2)" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << "Hierarchy of class B2" << endl;
    ob2.show_B2();

    B3 ob3(3);
    cout << "\n\nB3 ob3(3)" << endl;
    cout << "sizeof(B3) = " << sizeof(B3) << endl;
    cout << "Hierarchy of class B3" << endl;
    ob3.show_B3();

    D1 ob4(4, 5, 6, 7);
    cout << "\n\nD1 ob4(4,5,6,7)" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "Hierarchy of class D1" << endl;
    ob4.show_D1();

    D3 ob5(8, 9);
    cout << "\n\nD1 ob5(8,9)" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << "Hierarchy of class D3" << endl;
    ob5.show_D3();

    D2 ob6(10, 11, 12, 13, 14, 15);
    cout << "\n\nD1 ob6(10,11,12,13,14,15)" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << "Hierarchy of class D2" << endl;
    ob6.show_D2();

    D4 ob7(16, 17, 18, 19, 20, 21, 22);
    cout << "\n\nD4 ob7(16,17,18,19,20,21,22)" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << "Hierarchy of class D4" << endl;
    ob7.show_D4();

    return 0;
}