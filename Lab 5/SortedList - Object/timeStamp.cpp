#include "timeStamp.h"
#include<iostream>
using namespace std;

timeStamp::timeStamp()
{
    sec = 0;
    min = 0;
    hour = 0;
}

timeStamp::timeStamp(int newSec, int newMin, int newHour)
{
    sec = newSec;
    min = newMin;
    hour = newHour;
}

void timeStamp::SetHour(int h)
{
    hour = h;
}

void timeStamp::SetMin(int m)
{
    min = m;
}

void timeStamp::SetSec(int s)
{
    sec = s;
}

int timeStamp::getSec()
{
    return sec;
}

int timeStamp::getMin()
{
    return min;
}

int timeStamp::getHour()
{
    return hour;
}

void timeStamp::Print()
{
    cout << sec << ":" << min << ":" << hour << endl;
}

bool operator<(timeStamp t1, timeStamp t2)
{
    if(t1.getHour()<t2.getHour())
        return true;
    else
        return false;
}
