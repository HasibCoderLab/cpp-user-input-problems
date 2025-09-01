// ================================================
//               Language: C++ / Cpp
//               Topic   : [User-Input]
//               Problem : 👉👉 [8] Calculate Remainder & Quotient
//     👉 Dividend আর Divisor ইনপুট নিয়ে quotient আর remainder
// ================================================

#include <iostream>
using namespace std;
int main()
{

    int Dividend;
    cout << "Enter Dividend : ";
    cin >> Dividend;

    int Divisor;
    cout << "Enter Divisor : ";
    cin >> Divisor;

    int Quotient = Dividend / Divisor;
    int Remainder = Dividend % Divisor;
    cout << "Quotient = " << Quotient << endl;
    cout << "Remainder = " << Remainder << endl;

    return 0;
}