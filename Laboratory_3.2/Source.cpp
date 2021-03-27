#include <iostream>
#include "Truck.h"

using namespace std;
int main()
{
    
    Truck A( "Lamborgini", "Red",  2000, 213);

    cout << "Student A" << endl;
    A.SetLoad_capacity(1000);
    cout << A;

    cout << "Student A" << endl;
    A.Setbrand("Bugatti");
    A.SetLoad_capacity(100);
    cout << A;
    

    return 0;
}
