#include <iostream>
#include "SortedType.cpp"
#include "timeStamp.cpp"
using namespace std;

void Print(SortedType<timeStamp> s)
{
    for(int i=0;i<s.LengthIs(); i++)
    {
        timeStamp temp;
        s.GetNextItem(temp);
        temp.Print();
    }
    s.ResetList();
    cout<<endl;
}

int main()
{
    timeStamp t1(2,3,4);
    timeStamp t2(4,3,2);
    timeStamp t3(3,4,5);
    SortedType<timeStamp> st;
    st.InsertItem(t1);
    st.InsertItem(t2);
    st.InsertItem(t3);

    Print(st);

    return 0;
}
