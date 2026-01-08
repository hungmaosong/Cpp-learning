#include <iostream>
#include <iomanip>
#include <cstdlib> //for exit()
#include "Array.h"
using namespace std;

Array::Array(int arrSize)
{
    size = (arrSize > 0 ? arrSize : 10); //確保陣列大小>0
    ptr = new int[size]; //配置記憶體
    for (int i = 0; i < size; i++)
        ptr[i] = 0; //初始化陣列元素為0
}

Array::Array(const Array & arrTocpy):size(arrTocpy.size)
{
    ptr = new int[size]; //配置記憶體
    for (int i = 0; i < size; i++)
        ptr[i] = arrTocpy.ptr[i]; //複製陣列元素
}

int Array::getSize() const
{
    return size;
}

const Array & Array::operator=(const Array & right) // arr1 = arr2
{
    if (&right != this) //避免自己assign自己
    {
        if (size != right.size)
        {
            delete[] ptr; //釋放原本記憶體
            size = right.size;
            ptr = new int[size]; //重新配置記憶體
        }
        for (int i = 0; i < size; i++)
            ptr[i] = right.ptr[i]; //複製陣列元素
    }
    return *this; //傳回目前物件參考
}

bool Array::operator==(const Array & right) const // arr1 == arr2
{
    if (size != right.size)
        return false; //大小不同，陣列不相等
    for (int i = 0; i < size; i++)
        if (ptr[i] != right.ptr[i])
            return false; //有元素不同，陣列不相等
    return true; //陣列相等
}

int & Array::operator[](int subscript) // 取元素位址(之後賦值用) arr[5] = 100
{
    if (subscript < 0 || subscript >= size)
    {
        cerr << "Error: Subscript " << subscript << " out of range" << endl;
        exit(1); //終止程式
    }
    return ptr[subscript]; //傳回元素位址
}

int Array::operator[](int subscript) const // 取元素值 arr[5]
{
    if (subscript < 0 || subscript >= size)
    {
        cerr << "Error: Subscript " << subscript << " out of range" << endl;
        exit(1); //終止程式
    }
    return ptr[subscript]; //傳回元素值
}

Array::~Array()
{
    delete[] ptr; //釋放記憶體
}

istream & operator>>(istream & input, Array & a) //輸入陣列元素
{
    for (int i = 0; i < a.size; i++)
        input >> a.ptr[i];
    return input; //傳回輸入物件
}

ostream & operator<<(ostream & output, const Array & a) //輸出陣列元素
{
    int i;
    for (int i = 0; i < a.size; i++)
    {
        output << setw(3) << a.ptr[i];
        output << endl;
    }
    
    return output; //傳回輸出物件
}