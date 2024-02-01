#include<iostream>
using namespace std;
class Product{
    public:
    int id;
    int price;
    Product()
    {
        cout<<"Constructor1 is called:"<<endl;
        cout<<this<<endl;
    }
    Product(int id,int y)
    {
        this->id=id;
        price=y;
        cout<<"id :"<<id<<" Price :"<<price<<endl;
    }
    void display()
    {
        cout<<id<<" "<<price<<endl;
    }
};
int main()
{
    Product p1(5,8);
    p1.display();
    return 0;
}