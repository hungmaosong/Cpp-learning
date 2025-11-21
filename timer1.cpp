#include <iostream>
#include <string>
using namespace std;

class Timer //用來定義一個物件的屬性、動作/功能，ex:汽車設計圖(包含顏色、加速、煞車...)
{
private:
    /* data */
public: //其他function、其他class 的 member function 可呼叫
    void hello(string name){ //功能
        cout << "hello " << name << " !!!!!" << endl;
    }
};

int main(){
    Timer tmr; //class + 名稱 = 宣告物件
    string username;
    cout << "enter your name: ";
    getline(cin,username); //從cin(鍵盤)讀一行進來
    tmr.hello(username); //call member function

    return 0;
}


