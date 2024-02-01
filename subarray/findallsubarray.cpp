#include<bits/stdc++.h>
using namespace std;
void solution(int arr[],int n)
{
    //print all the subarray of the array
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            cout<<arr[k]<<" ";
            cout<<endl;
        }
       
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solution(arr,n);
}