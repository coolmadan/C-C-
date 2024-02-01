#include<iostream>
using namespace std;
int main()
{
    int beg,end;
    cout<<"Enter the range of years lower limit and upper limit : ";
    cin>>beg>>end;
    cout<<"The leap years between "<<beg<<" and "<<end<<" are : "<<endl;
    for(int i=beg;i<end;i++)
    {
        if(i%4==0)
        cout<<i<<endl;
    }
    return 0;

}