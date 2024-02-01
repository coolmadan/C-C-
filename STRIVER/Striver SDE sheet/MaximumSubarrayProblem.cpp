#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>&input,vector<int>&subarray)
{
    int meh=0,msf=INT_MIN,s=0;
    for(int i=0;i<input.size();i++)
    {
        meh+=input[i];
        if(meh>msf)
        {
            msf=meh;
            subarray.clear();
            subarray.push_back(s);
            subarray.push_back(i);
        }
        if(meh<0)
        {
            s=i+1;
            meh=0;
        }
    }
    return msf;
}

int main()
{
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        input.push_back(num);
    }
    vector<int>subarray;
    cout<<maxSubarraySum(input,subarray)<<endl;
    for(int i=subarray[0];i<=subarray[1];i++)
    cout<<input[i]<<" ";
    
}