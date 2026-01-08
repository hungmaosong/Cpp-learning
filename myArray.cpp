#include <iostream>
#include "Array.h"
using namespace std;
int main(){
    Array ints1(7);
    Array ints2;

    cout << "Size of ints1 = " << ints1.getSize();
    cout << "\ncountent = " << ints1;
    cout << "\nSize of ints2 = " << ints2.getSize();
    cout << "\ncountent = " << ints2;

    cout << "\nEnter 17 integers for ints1:" << endl;
    cin >> ints1 >> ints2;

    cout << "ints1:" << ints1 << endl;
    cout << "ints2:" << ints2 << endl;

    if(ints1 != ints2)
        cout << "ints1 != ints2" << endl;
    
    Array ints3(ints1); //使用複製建構子
    cout << "ints3:" << ints3 << endl;

    ints1 = ints2; //使用指派運算子
    cout << "ints1:" << ints1 << endl;
    cout << "ints2:" << ints2 << endl;

    cout << "ints1[5] = " << ints1[5] << endl;
    ints1[5] = 50;
    cout << "ints1:" << ints1 << endl;

    ints1[20] = 100; //產生錯誤訊息並終止程式
    return 0;
}

/*
* PS D:\Cpp-learning> g++ -c Array.cpp
* PS D:\Cpp-learning> g++ -c myArray.cpp
* PS D:\Cpp-learning> g++ -o myArray Array.o myArray.o
*/