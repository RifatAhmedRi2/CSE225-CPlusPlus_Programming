#include "dynarr.h"

template <class T>dynarr<T>::dynarr(int s)
{
    data = new T(s);
    size = s;
}

template <class T>T dynarr<T>::getValue(int index)
{
    return data[index];
}

template <class T>void dynarr<T>::setValue(int index, T value)
{
    data[index] = value;
}

template <class T>dynarr<T>::~dynarr()
{
    delete[] data;
}
