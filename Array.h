#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

// 利用operator overloading 實作c語言的 array功能
class Array
{
    friend ostream &operator <<(ostream &, const Array &); // 輸出陣列元素
    friend istream &operator >>(istream &, Array &); // 輸入陣列元素
private:
    /* data */
    int size;
    int *ptr;
public:
    Array(int = 10);
    Array(const Array &);
    ~Array();

    int getSize() const;
    const Array &operator = (const Array &); // arr1 = arr2
    bool operator == (const Array &) const; // arr1 == arr2
    bool operator!=(const Array &right) const // arr1 != arr2
    { 
        return !(*this == right);
    }
    int &operator [](int); // 取元素位址(之後賦值用) arr[5] = 100
    int operator [](int) const; // 取元素值 arr[5]
};

#endif