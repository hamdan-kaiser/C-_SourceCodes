#ifndef DYNARR_H
#define DYNARR_H


class dynarr
{
    public:
        dynarr();//class name
        dynarr(int);//constructor
        ~dynarr();
        void setValue(int,int);
        int getValue(int);
        void allocate(int);
        int getsize(int);

    private:
        int *data;
        int size;
};

#endif // DYNARR_H
