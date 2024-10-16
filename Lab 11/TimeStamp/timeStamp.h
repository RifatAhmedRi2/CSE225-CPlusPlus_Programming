#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp
{
    public:
        timeStamp();
        timeStamp(int,int,int);
        int getSeconds();
        void setSeconds(int);
        int getMinutes();
        void setMinutes(int);
        int getHours();
        void setHours(int);
        bool operator<(timeStamp);
        bool operator==(timeStamp);

    private:
        int seconds;
        int minutes;
        int hours;
};

#endif // TIMESTAMP_H_INCLUDED
