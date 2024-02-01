#include<iostream>
using namespace std;
class Student{
    private:
    int age;

    public :
    int RollNumber;
    void display()
    {
        cout<<age<<" "<<RollNumber<<endl;
    }
    int getage()
    {
        return age;
    }
    void setage(int a,int password)
    {
        if(password==1234)
        {
            if(a>0)
            {
                age=a;
            }
            else
            return;
        }
        else
        return;
    }
};
