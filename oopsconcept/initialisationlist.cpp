#include<iostream>
using namespace std;
class Student
{
  public:
  int age;
  int const rollnumber;
  int const &x;

  //Since we cannot change and initialise the values in
  // the constant roll number and reference variable x because they both need to assigned at the time
  //of intialisation but if we initialise the values at that time in class then always when we create
  //a new object it will have the same value which we don't want to do so here intialisation list
  //will come to use. It help us initialise the const and reference 
  Student(int r,int a): rollnumber(r),x(this->age),age(a){
    //the above used is the intialisation list which help us intialise the constand and reference 
    //which we usually cannot do 

  }  
  void display()
  {
    cout<<age<<' '<<rollnumber<<" "<<x<<endl;
      }
};
int main()
{
    Student s1(114,19);
    s1.display();
   // s1.x=9;
    s1.display();
}