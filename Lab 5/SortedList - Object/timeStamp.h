#ifndef TIMESTAMP_H
#define TIMESTAMP_H
#include <iostream>
using namespace std;

class timeStamp
{
    private:
        int hour;
        int min;
        int sec;

    public:
        timeStamp();
        timeStamp(int,int,int);
        void SetHour(int);
        void SetMin(int);
        void SetSec(int);
        int getSec();
        int getMin();
        int getHour();
        void Print();
        friend bool operator<(timeStamp, timeStamp);
};

#endif // TIMESTAMP_H
