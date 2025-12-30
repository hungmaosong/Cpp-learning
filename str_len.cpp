#include <iostream>
#include <cstring> // c++版的 #include <string.h> (拿掉.h前面加上c)
using namespace std;

int main(int argc, char** argv){
    #ifdef DEBUG
        cout << argv[1] << "\n"; // ./str_len NCKU => str_len = argv[0] NCKU = argv[1]
    #endif

    cout << strlen(argv[1]) << "\n";
    return 0;
}

/*
 * 想要看第7行 argv[1] ，可在編譯時: g++ -DDEBUG -o str_len str_len.cpp
 * 即可定義DEBUG，並觀察ifdef內的結果
 * 執行./str_len NCKU觀察看看
 * 
 * 補充: .h檔可這樣寫避免重複define
 * #ifdef 
 * #define ...
 * ...程式內容...
 * #endif
 * 
 */