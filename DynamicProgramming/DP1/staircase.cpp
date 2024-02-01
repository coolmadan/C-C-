#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
int solution1(int n)
{
    long  arr[n+1];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int i=4;i<n+1;i++)
    {
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3])%mod;
    }
    return arr[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solution1(n);
    }
}