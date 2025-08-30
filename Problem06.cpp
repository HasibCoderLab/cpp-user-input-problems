// ================================================
//               Language: C++ / Cpp
//               Topic   : [User-Input]
//               Problem : 👉👉 [6] Simple Interest Calculation
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "Enter Principal : ";
    cin >> p;

    float t;
    cout << "Enter Time  ";
    cin >> t;

    float r;
    cout << "Enter Rate ";
    cin >> r;
    cout<<"Simple Interest = " << (p*t*r) /100<<endl;
    return 0;
}