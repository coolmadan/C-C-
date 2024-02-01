#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int age;
    char *name;

    Student(int age,char *name)
    {
        this->age=age;
        //shallow copy this->name=name;
        //deep copy:
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    //copy constructor having argument as a reference (constant)
    Student(Student const &s)
    {
        this->age=s.age;
        //shallow copy this->name=name;
        //the above is the shallow copy because I am only sending the address to the pointer data member
        //deep copy:
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
        //the above is the deep copy because first we are creating space in the memory and then 
        //copying the name of student s into the name of this object
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
    
};
int main()
{
    char name[]="abcd";
    Student s1(19,name);
    s1.display();
    Student s2(s1);
    s2.name[1]='x';
    s2.display();
    s1.display();
    
}