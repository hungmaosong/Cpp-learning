#include <iostream> //<>表示標準的標頭檔
using namespace std;

int main(){
    #include "include.h"; //main裡面的include要用" "，表示自己寫的file(會優先找目前的資料夾)，會完整印出該檔案內容

    return 0;
}