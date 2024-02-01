#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
/*int last_index(int arr[],int size,int x)
{   
    if(size==0)
    return -1;
    if(arr[size-1]==x)
    return size-1;
    int ans=last_index(arr,size-1,x);
    return ans;

}*/
int last_index(int arr[],int size, int x)
{
    if(size==0)
    return -1;
    int ans =last_index(arr+1,size-1,x);
    if(ans!=-1)
    return ans+1;
    else
    {
        if(arr[0]==x)
        return 0;
    return ans;
    }

}
int main()
{
    int arr[6]={5,4,8,9,9,0};
    cout<<last_index(arr,6,8);
}