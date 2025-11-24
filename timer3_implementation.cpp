#include "timer3.h"

    Timer::Timer() // function寫在外面時，要寫出class全名(Timer::)
    {
        setStart(0); //validation: 盡量去呼叫set來存取member data，以便做條件判斷
    }
    Timer::Timer(time_t s)
    {
        setStart(s);
    }
 
    void Timer::start()
    { // 按下碼表
        setStart(time(NULL));
    }
    void Timer::setStart(time_t ts)
    {
        start_ts = (ts>0)? ts : time(NULL) ;
    }
    time_t Timer::getStart()
    { // get、set常用來存取private member data
        return start_ts;
    }
    int Timer::getElapsedTime()
    {
        return time(NULL) - getStart();
    }
