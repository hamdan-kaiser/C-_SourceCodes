#include "dynarr.h"
#include <iostream>
using namespace std;
    template<class T>
    dynArr<T>::dynArr(int s)
    {
        data = new T[s];
        size = s;
    }

    template<class T>
    dynArr<T>::~dynArr()
    {
        delete [] data;
    }

    template<class T>
    T dynArr<T>::getValue(int index)
    {

        cout<<" "<<data[index];
        return data[index];
    }

    template<class T>
    int dynArr<T>::getsize()
    {

        return size;
    }

    template<class T>
    void dynArr<T>::setValue(int index, T value)
    {
        data[index] = value;
    }
