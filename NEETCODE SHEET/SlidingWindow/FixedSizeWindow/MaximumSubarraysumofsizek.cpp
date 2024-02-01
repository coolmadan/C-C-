#include<bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector<int>&nums,int k)
{
    /*
    You are given with an array and a window of size k and you are asked to provide the maximum sum
    of subarray.That means you can use siding window technique.
    */
   int sp=0;
   int ep=0;
   int sum=0;
   int ans=INT_MIN;
   while(ep<nums.size())
   {
        sum=sum+nums[ep];
        if(ep-sp+1<k)
            ep++;
        else if(ep-sp+1==k)
        {
            ans=max(ans,sum);
            ep++;
            sum=sum-nums[sp];
            sp++;
        }
   }
   return ans;
   

}
int main()
{
    int n;
    cin>>n;
    vector<int>inputs(n);
    for(int i =0;i<n;i++)
        cin>>inputs[i];
    int k;
    cin>>k;
    cout<<maximumSubarraySum(inputs,k);
}