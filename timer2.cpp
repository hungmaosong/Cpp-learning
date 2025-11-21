#include <iostream>
#include <ctime> //for time()
#include <unistd.h> //for sleep()
using namespace std;

class Timer
{
private: //member data通常設成private，僅同class member function可直接存取
    time_t start_ts;
public:
    void setStart(time_t ts){
        start_ts = ts;
    }
    time_t getStart(){ //get、set常用來存取private member data
        return start_ts;
    }
    int getElapsedTime(){
        return time(NULL) - getStart();
    }
};

int main(){
    Timer tmr;
    time_t ts, new_ts;

    ts = time(NULL); //從1970/1/1 0:00:00開始到現在過了幾秒
    tmr.setStart(ts);
    sleep(2);
    
    cout << "Start time: " << tmr.getStart() << endl;
    cout << "Elaps time: " << tmr.getElapsedTime() << endl;

    new_ts = time(NULL); // 從1970/1/1 0:00:00開始到現在過了幾秒
    tmr.setStart(new_ts);
    for(int i = 5; i > 0; i--){
        cout << i << endl;
        sleep(1);
    }

    cout << "BOOM!!" << endl;
    cout << "Elaps time(after BOOM): " << tmr.getElapsedTime() << endl;

    return 0;
}



