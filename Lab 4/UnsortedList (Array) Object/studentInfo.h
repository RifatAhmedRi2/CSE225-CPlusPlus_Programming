#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include <string>
using namespace std;

class studentInfo
{
    public:
        studentInfo();
        studentInfo(int, string, double);
        int getID();
        string getName();
        double getCGPA();
        void Print();
        friend istream &operator >> (istream &in,  studentInfo &obj);

    private:
        int ID;
        string Name;
        double CGPA;
};

#endif // STUDENTINFO_H
