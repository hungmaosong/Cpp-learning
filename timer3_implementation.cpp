#include "timer3.h"

Timer::Timer() // function寫在外面時，要寫出class全名(Timer::)
{
    start_ts = 0;
}
    Timer::Timer(time_t s)
    {
        setStart(s);
    }
 
    void Timer::start()
    { // 按下碼表
        start_ts = time(NULL);
    }
    void Timer::setStart(time_t ts)
    {
        start_ts = ts;
    }
    time_t Timer::getStart()
    { // get、set常用來存取private member data
        return start_ts;
    }
    int Timer::getElapsedTime()
    {
        return time(NULL) - getStart();
    }
