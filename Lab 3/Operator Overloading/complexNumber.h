#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class complexNumber
{
    public:
        int num;
        complexNumber();
        complexNumber(int);
        complexNumber operator+ (complexNumber);
};

#endif // COMPLEXNUMBER_H
