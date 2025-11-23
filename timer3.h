#include <ctime> //.h檔只需保留必要的

class Timer
{
private: // member data通常設成private，僅同class member function可直接存取
    time_t start_ts;

public:
    // Constructor:名稱和class一樣，沒用return type，物件初始化用的!!!!!(通常設為public)
    // function overloading:function name可一樣，但參數個數要不同，即可被視為不同function
    //通常.h只會列出interface，不會寫實作的部分
    Timer();
    Timer(time_t s);

    void start();
    void setStart(time_t ts);
    time_t getStart();
    int getElapsedTime();
};