#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    Stack<double> dStack(5);
    double dvalue = 1.1;
    cout << "Push element:" ;
    while (dStack.push(dvalue))
    {
        cout << dvalue << " ";
        dvalue += 1.1;
    }
    cout << "\nStack is full. Cannot push " << dvalue << endl;

    cout << "Pop elements: ";
    while (dStack.pop(dvalue))
    {
        cout << dvalue << " ";
    }
    cout << "\nStack is empty. Cannot pop any more elements." << endl;

    Stack<int> iStack;
    int ivalue = 1;
    cout << "Push element:" ;
    while (iStack.push(ivalue))
    {
        cout << ivalue << " ";
        ivalue += 1;
    }
    cout << "\nStack is full. Cannot push " << ivalue << endl;

    cout << "Pop elements: ";
    while (iStack.pop(ivalue))
    {
        cout << ivalue << " ";
    }
    cout << "\nStack is empty. Cannot pop any more elements." << endl;
}