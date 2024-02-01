#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    int RollNumber;
    char Name;
    Student(int a,int b,char c)
    {
        age=a;
        RollNumber=b;
        Name=c;
    }
    void display()
    {
        cout<<"age : "<<age<<endl<<"RollNumber : "<<RollNumber<<endl<<"Name : "<<Name<<endl;
    }
};
int main()
{
    Student s1(19,114,'P');
    cout<<"S1 : "<<endl;
    s1.display();
    Student s2(s1);
    cout<<"S2 : "<<endl;
    s2.display();
    return 0;
}