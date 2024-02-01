#include<bits/stdc++.h>
using namespace std;
int solution1(int n)
{
    if(sqrt(n)-floor(sqrt(n))==0)
    return 1;
    if(n<=3)
    return n;
    int ans=INT_MAX;
    for(int i=1;i*i<n;i++)
    {
        ans=min(ans,1+solution1(n-i*i));
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<solution1(n);
}