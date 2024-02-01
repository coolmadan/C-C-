#include<iostream>
using namespace std;
class Fraction
{
  private :
  int numerator;
  int denominator;

  public :
    Fraction(int numerator,int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void display()
    {
        cout<<this->numerator<<'/'<<this->denominator<<endl;
    }
    void simplify()//finds the gcd and simplifies numerator and denominator
    {   
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0)
            gcd=i;
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    Fraction operator+(Fraction const &f2)
    {
        int lcm=this->denominator*(f2.denominator);
        int x=lcm/this->denominator;
        int y=lcm/f2.denominator;
        int num=x*this->numerator+y*f2.numerator;
        int den=lcm;
        //simplify();
        Fraction f3(num,den);
        f3.simplify();
        return f3;
    }
   Fraction operator*(Fraction const &f2) const // with this outside const the function becomes constant 
   //we made this function as constant because this function was not performing any action or changing any
   //value of the this object it was just using the values of this object and returning out the result with
   //the help of new fraction created.
   {
    
    int num=numerator*f2.numerator;
    int den=denominator*f2.denominator;
    Fraction f3(num,den);
    f3.simplify();
    return f3;

   }
   bool operator==(Fraction f2){
    simplify();
    f2.simplify();
    return(numerator==f2.numerator&&denominator==f2.denominator);
   }
};
int main()
{
    /*Fraction f1(10,2);
    Fraction f2(15,4);
    f1.display();
    f2.display();
    Fraction f3 = f1*f2;
    f3.display();
    Fraction f4 = f1+f2;
    f4.display();*/
    Fraction f1(70,8);
    Fraction f2(35,4);
    f1.display();
    f2.display();
    if (f1==f2)
    cout<<"equal"<<endl;
    else
    cout<<"not equal"<<endl;
}
