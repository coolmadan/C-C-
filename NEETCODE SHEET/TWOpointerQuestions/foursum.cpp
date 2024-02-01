#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int sum=0;
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            for(int j =i;j<nums.size();j++){
                if(nums[i]!=nums[j]){
                    sum=nums[i]+nums[j];
                    sum=target-sum;
                    int low=j+1;
                    int high=nums.size()-1;
                    while(low<high){
                        if(nums[low]+nums[high]==sum){
                            vector<int>vec;
                            vec.push_back(nums[i]);
                            vec.push_back(nums[j]);
                            vec.push_back(nums[low]);
                            vec.push_back(nums[high]);
                            res.push_back(vec);
                        while(nums[low]==nums[low+1])low++;
                        while(nums[high]==nums[high-1])high--;
                        }
                        else if(nums[low]+nums[high]<sum)
                            low++;
                        else
                            high--;
                    }
                }
            }
        }
        return res;
    }

int main(){
    int n;
    cin>>n;
    int target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cin>>target;
    
    vector<vector<int>>ans=fourSum(nums,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    
}
