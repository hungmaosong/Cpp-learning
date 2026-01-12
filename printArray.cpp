#include <iostream>
using namespace std;

// template function = template + 後面的那個函式，一整組
template <typename T>
void printArray(const T* const arr, int count){
    for(int i = 0; i < count; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int acount = 5;
    const int bcount = 7;
    const int ccount = 6;

    int a[acount] = {1, 2, 3, 4, 5};
    double b[bcount] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    char c[ccount] = "Hello";

    cout << "Array a: ";
    printArray(a, acount);
    cout << "Array b: ";
    printArray(b, bcount);
    cout << "Array c: ";
    printArray(c, ccount);

    return 0;
}