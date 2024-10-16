#include "complexNumber.h"

complexNumber::complexNumber()
{

}

complexNumber::complexNumber(int a)
{
    num = a;
}

complexNumber complexNumber:: operator+ (complexNumber cn)
{
    complexNumber newObjectName;
    newObjectName.num = num + cn.num;
    return (newObjectName);
}
