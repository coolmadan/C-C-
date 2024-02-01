#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> twoSum(vector<int>&inputs,vector<int>&parts,int &target)
{
    vector<vector<int>>ans;
    int leftpointer=0;
    int rightpointer=inputs.size()-1;
    while(leftpointer<=rightpointer)
    {
        int sum= inputs[leftpointer]+inputs[rightpointer];
        if(inputs[leftpointer]+inputs[rightpointer]==target)
            {
                parts.push_back(inputs[leftpointer]);
                parts.push_back(inputs[rightpointer]);
                ans.push_back(parts);
                // leftpointer++;
                // rightpointer--;
            }
         if(sum>target)
        {
            rightpointer--;
        }
        else
            leftpointer++;
    }
    return ans;
}
void twoSum(vector<int>&inputs,vector<vector<int>>&ans,vector<int>&part,int n,int ind,int sum,int &target)
{
    //RECURSIVE APPROACH:
    //lets say you have an option for each element to take it or not
    if(ind==n)
    {
        if(sum==target)
        ans.push_back(part);
        return;
    }
    //Case 1: Lets say you are taking the element present at index ind
    part.push_back(inputs[ind]);
    sum+=inputs[ind];
    twoSum(inputs,ans,part,n,ind+1,sum,target);
    //Case 2: Not taking the element
    part.pop_back();
    sum-=inputs[ind];
    twoSum(inputs,ans,part,n,ind+1,sum,target);
    return;

}
int main()
{
    int n;
    cin>>n;
    vector<int>inputs(n);
    for(int i=0;i<n;i++)
        cin>>inputs[i];
    int target;
    cin>>target;
    //FOR RECURSIVE APPROACH:
    
    vector<vector<int>>ans;
    vector<int>part;
    /*
    twoSum(inputs,ans,part,n,0,0,target);
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    */
   //TWO POINTER APPROACH:
    ans = twoSum(inputs,part,target);
    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}