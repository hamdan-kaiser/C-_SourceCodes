#include <studentInfo.h>

StudentInfo::StudentInfo(){
    id=0;
    Name="";
    Cgpa=0;

}

StudentInfo::StudentInfo(int i,string n,float c){
    id=i;
    Name=n;
    Cgpa=c;

}

StudentInfo::SetId(int i){
    id=i;
}
StudentInfo::SetName(string n){
    Name=n;
}
StudentInfo::SetCgpa(float c){
    Cgpa=c;
}

StudentInfo::GetId(){
    return id;

}

StudentInfo::GetName(){
    return Name;
}

StudentInfo::GetCgpa(){
    return Cgpa;

}

void StudentInfo::print(){
    cout<<GetId()<<","<<GetName()<<","<<GetCgpa();
}

bool operator ==(StudentInfo &s1,StudentInfo &s2){
    if(s1.GetId() == s2.GetId())
        return true;
    else
        return false;
}
