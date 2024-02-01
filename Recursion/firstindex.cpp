#include<iostream>
using namespace std;
int dex(int arr[],int size,int x)
{
    if(size==0)
    return -1;
    if(arr[0]==x)
    {
        return 0;
    }
    int ans=dex(arr+1,size-1,x);
    if(ans!=-1)
    return ans+1;
    else
    return ans;
}
int main()
{
    int arr[5]={5,6,4,3,4};

    cout<<dex(arr,5,3);
}