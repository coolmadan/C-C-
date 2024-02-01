#include<iostream>
#include"fractionclass.cpp"
using namespace std;
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.display();
    f2.display();
    f1.add(f2);
    f1.display();
    Fraction f3(30,7);
    f3.add(f1);
    f3.display();
    Fraction f4(3,4);
    f2.multiply(f4);
    f2.display();
    return 0;
}