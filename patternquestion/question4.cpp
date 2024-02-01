#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter lower and upper limits : ";
    cin>>n>>m;
    cout<<"The sequence numbers between "<<n<<" and "<<m<<" are : ";
    for(int i=n;i<m;i++)
    {int count=0;
        for(int j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==0)
        cout<<i<<" ";
    }
    return 0;
}