#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
    public:
        complex();
        complex(double, double);
        complex operator+(complex);
        complex operator*(complex);
        bool operator!=(complex);
        void Print();

    private:
        double Real, Imaginary;
};

#endif // COMPLEX_H
