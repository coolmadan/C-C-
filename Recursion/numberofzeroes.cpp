#include<iostream>
using namespace std;
int numberofZeros(int n)
{ 
    static int count=0;
    if(n==0)
    {
        return 1;
    }
    else{
        if(n%10==0)
        count++;
        numberofZeros(n/10);
        return count;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<numberofZeros(n);
    return 0;
}