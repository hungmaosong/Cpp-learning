#include <iostream>
#include "max.h" //template function header file
using namespace std;

int main() {
    int i1 = 3, i2 = 7, i3 = 5;
    double d1 = 6.6, d2 = 3.3, d3 = 9.9;
    char c1 = 'A', c2 = 'Z', c3 = 'M';

    cout << "Maximum of int:" << i1 << ", " << i2 << " and " << i3
         << " is " << maximum(i1, i2, i3) << endl;

    cout << "Maximum of double:" << d1 << ", " << d2 << " and " << d3
         << " is " << maximum(d1, d2, d3) << endl;

    cout << "Maximum of char:" << c1 << ", " << c2 << " and " << c3
         << " is " << maximum(c1, c2, c3) << endl;

    return 0;
}