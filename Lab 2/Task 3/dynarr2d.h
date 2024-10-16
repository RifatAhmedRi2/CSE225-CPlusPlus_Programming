#ifndef DYNARR2D_H
#define DYNARR2D_H


class dynarr2d
{
    private:
        int **data;
        int row;
        int col;

    public:
        dynarr2d();
        dynarr2d(int, int);
        ~dynarr2d();
        void setValue(int, int, int);
        int getValue(int, int);
};

#endif // DYNARR2D_H
