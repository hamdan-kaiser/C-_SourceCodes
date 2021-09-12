#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    public:
        timeStamp();
        timeStamp(int,int,int);
        void print();
        bool operator==(timeStamp);
        bool operator<(timeStamp);

    private:
        int sec;
        int minute;
        int hour;
};

#endif // TIMESTAMP_H
