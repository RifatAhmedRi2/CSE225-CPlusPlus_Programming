#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.h"
using namespace std;

int main()
{
    //Creating the timeStamps
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,13);
    timeStamp t4(25,36,17);
    timeStamp t5(52,2,20);

    //Creating a list of timeStamps
    SortedType<timeStamp> st;

    //Inserting the timeStamps into the list
    st.InsertItem(t1);
    st.InsertItem(t2);
    st.InsertItem(t3);
    st.InsertItem(t4);
    st.InsertItem(t5);

    //Deleting the timeStamp 25 36 17
    st.DeleteItem(t4);

    //Creating an Array of timeStamps to Print the Sorted List
    timeStamp temp;
    int length = st.LengthIs();
    timeStamp timeArray[length];
    for(int i=0; i<length; i++)
    {
        st.GetNextItem(temp);
        timeArray[i] = temp;
    }

    //Printing the Sorted timeStamps List
    for(int i=0; i<length; i++)
    {
        if(timeArray[i].getSeconds()<10)
            cout << "0" << timeArray[i].getSeconds() << ":";
        else
            cout << timeArray[i].getSeconds() << ":";

        if(timeArray[i].getMinutes()<10)
            cout << "0" << timeArray[i].getMinutes() << ":";
        else
            cout << timeArray[i].getMinutes() << ":";

        if(timeArray[i].getHours()<10)
            cout << "0" << timeArray[i].getHours() << endl;
        else
            cout << timeArray[i].getHours() << endl;
    }

    return 0;
}
