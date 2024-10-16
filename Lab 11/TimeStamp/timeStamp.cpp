#include "timeStamp.h"

timeStamp::timeStamp()
{
    seconds = 00;
    minutes = 00;
    hours = 00;
}

timeStamp::timeStamp(int newSeconds, int newMinutes, int newHours){
    seconds = newSeconds;
    minutes = newMinutes;
    hours = newHours;
}

int timeStamp::getSeconds()
{
    return seconds;
}

void timeStamp::setSeconds(int newSeconds)
{
    seconds = newSeconds;
}

int timeStamp::getMinutes()
{
    return minutes;
}

void timeStamp::setMinutes(int newMinutes)
{
    minutes = newMinutes;
}

int timeStamp::getHours()
{
    return hours;
}

void timeStamp::setHours(int newHours)
{
    hours = newHours;
}

bool timeStamp::operator<(timeStamp a)
{
    if(seconds<a.seconds)
        return true;
    else
        return false;
}

bool timeStamp::operator==(timeStamp a)
{
    if(seconds==a.seconds)
        return true;
    else
        return false;
}
