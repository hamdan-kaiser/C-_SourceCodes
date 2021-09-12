#include "dynarr.h"
#include<iostream>
using namespace std;
dynarr::dynarr()
{
    //ctor
    data  = NULL;
    size =0;
}
dynarr::dynarr(int s)
{
    //ctor
    data = new int[s];
    size = s;
}

dynarr::~dynarr()
{
    delete[] data;
    //dtor
}

int dynarr::getValue(int index)
{
    cout<< data[index]<<" ";
    return data[index];
}

void dynarr::setValue(int index, int value)
{
    data[index] = value;
}
void dynarr::allocate(int s)
{
    /**
    1. deleting previous array
    2. create a new size of an array*/
    delete [] data;
    data = NULL;
    size = s;
}

int getsize(int s)
{
   return s;
}
