/*
Problem : Given an integere array nums, return all the triplets [nums[i],nums[j],nums[k]] such that i!=j,i!=k,j!=k
and nums[i]+nums[j]+nums[k]==0.
Note : There should not be any duplicates.
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threeSum(vector<int>&nums)
{
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i =0;i<nums.size()-2;i++)
    {
        if(i==0||(i>0&&nums[i]!=nums[i-1])){
        int sum=0-(nums[i]);
        int low=i+1;
        int high=nums.size()-1;
        while(low<high)
        {
            if(nums[low]+nums[high]==sum)
            {
                vector<int>vec;
                vec.push_back(nums[i]);
                vec.push_back(nums[low]);
                vec.push_back(nums[high]);
                ans.push_back(vec);
                while(low<high &&nums[low]==nums[low+1])low++;
                while(high>low &&nums[high]==nums[high-1])high--;
                low++;
                high--;
            }else if(nums[low]+nums[high]>sum)
            high--;
            else low++;
        }
        }
    }
    return ans;
}
 
int main()
{
    int n;
    cin>>n;
    vector<int>input(n);
    for(int i =0;i<n;i++)
        cin>>input[i];
    vector<vector<int>>output=threeSum(input);
    // for(auto it : output)
    // {
    //     for(int i =0;i<it.size();i++)
    //     {
    //         cout<<it[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<output.size()<<endl;
    for(int i =0;i<output.size();i++)
    {
        for(int j =0;j<output[i].size();j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }
}