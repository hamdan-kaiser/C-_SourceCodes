#include<iostream>
#include "timeStamp.h"


using namespace std;

timeStamp::timeStamp(){
        //empty
}
timeStamp::timeStamp(int seconds, int minutes, int hrs)
{
    //ctor
    sec = seconds;
    minute = minutes;
    hour = hrs;

}

bool timeStamp::operator==(timeStamp s)
{

    if(s.hour == hour && s.minute ==minute && s.sec ==sec)
        return true;
    else
        return false;
}
bool timeStamp::operator<(timeStamp s)
{
    // timeStamp s;
    if(hour < s.hour) return true;
    else if(hour == s.hour && minute < s.minute)
        return true;
    else if(hour == s.hour && minute == s.minute && sec < s.sec)
        return true;
    else
        return false;
}
void timeStamp::print()
{
    cout <<sec<<":"<<minute<<":"<<hour<< endl;
}

