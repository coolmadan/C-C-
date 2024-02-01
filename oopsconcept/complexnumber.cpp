#include<iostream>
using namespace std;
class Complexnumber{
    private:
    int real;
    int imaginary;
    public:
    Complexnumber(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }
    void display()
    {
        cout<<real<<'+'<<"i*"<<imaginary<<endl;
    }
    void plus(Complexnumber const &c2)
    {
        this->real=this->real+c2.real;
        this->imaginary=this->imaginary+c2.imaginary;
    }
    void multiply(Complexnumber const &c2)
    {
        this->real=this->real*c2.real-imaginary*c2.imaginary;
        this->imaginary=this->real*(c2.imaginary)+(this->imaginary*(c2.real));
    }
};
int main()
{
    Complexnumber c1(3,6);
    Complexnumber c2(7,9);
    c1.display();
    c2.display();
    //c1.plus(c2);
    //c1.display();
    //Complexnumber c3(2,1);
    //c3.multiply(c2);
    //3.display();
    c1.multiply(c2);
    c1.display();
    return 0;
}