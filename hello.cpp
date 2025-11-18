#include <iostream> //for using cout
using namespace std; //命名空間，不同空間的同名變數視為不同

int main(){
    std::cout << "Hello";
    cout << "Fuck" << "NCKU" << endl; //有加namespace，可不用寫std

    return 0;
}


/*
* g++ -o 執行檔名 CPP檔名.cpp
* ./執行檔名
*/