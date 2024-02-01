#include<iostream>
using namespace std;
class product
{
    public :
    int pid;
    static int prodsold;//this is a static data member
    //similarly we can also create static member function 
    //static functions ke through you can access only static properties
    //also you cannot call any static member with any object because every static member doesnot belong
    //to any object it belongs to a class.
    product()
    {
        prodsold++;//yaha pe meine constructor mei increment isliye kiya kyunki hr object keliye constructor 
        //call hoga to hr object ke liye prodsold ki value increment hojayegi
    }
};
int product ::prodsold=0;
int main()
{
    product p1;
    cout<<p1.pid<<endl;
    cout<<product::prodsold<<endl;

}