#include<iostream>
using namespace std;
#include"studentclass.cpp"
int main()
{
    Student S1;
    Student *S2=new Student;
    S1.RollNumber=114;
    S1.setage(19,1234);
    S1.display();
    //S2->display();
    S2->setage(20,1234);
    S2->RollNumber=111;
    S2->display();
    cout<<(*S2).getage();
    return 0;
}