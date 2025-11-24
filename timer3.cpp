#include <iostream>
#include <unistd.h> //for sleep()

#include "timer3.h"
using namespace std;

int main()
{
    Timer tmr;
    time_t ts;

    ts = time(NULL); // 從1970/1/1 0:00:00開始到現在過了幾秒
    tmr.setStart(ts);
    sleep(2);

    cout << "Start time: " << tmr.getStart() << endl;
    cout << "Elaps time: " << tmr.getElapsedTime() << endl;


    Timer tmr1;
    Timer tmr2(time(NULL));

    tmr1.start();
    sleep(2);
    cout << "Start time1: " << tmr1.getStart() << endl;
    cout << "Elaps time1: " << tmr1.getElapsedTime() << endl;
    cout << "Start time2: " << tmr2.getStart() << endl;
    cout << "Elaps time2: " << tmr2.getElapsedTime() << endl;

    return 0;
}

/*
 * g++ -c timer3_implementation.cpp (-c = compile only)
 * g++ -c timer3.cpp
 * g++ -o timer3 timer3.o timer3_implementation.o
 * ./timer3
 */
