#include <iostream>
#include <string>
using namespace std;

class Tire //用來定義一個物件的屬性、動作/功能，ex:汽車設計圖(包含顏色、加速、煞車...)
{
private:
    /* data */
public: //其他function、其他class 的 member function 可呼叫
   Tire(){
    cout << "This is a tire." << endl;
   }
};

class Car
{
private:
    Tire tire; //大物件包裹小物件，會先輸出其constructor
public:
    Car(){
        cout << "This is a car." << endl;
    }
};



int main(){
    Car yaris;

    return 0;
}


