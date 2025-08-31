// ================================================
//               Language: C++ / Cpp
//               Topic   : [User-Input]
//               Problem : 👉👉 [7] Temperature Conversion
//               👉 Celsius ইনপুট নিয়ে Fahrenheit-এ রূপান্তর 
// ================================================

#include <iostream>
using namespace std;
int main(){
    float value;
    cout<<"Enter Celsius : ";
    cin>> value;
    cout<<"Fahrenheit Temperature is " <<(value * 9/5) + 32 << "°" <<endl;
    return 0;
}