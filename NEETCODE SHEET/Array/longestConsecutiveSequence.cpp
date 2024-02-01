/*
Given an unsorted array of integers nums , return the length of the longest consecutive element sequence.
Example :
nums=[100,4,200,1,3,2]
Output = 4 
{1,2,3,4} : Longest Consecutive Sequence
*/
#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>&nums)
{
    //Creating a set for nums
    unordered_set<int>s(nums.begin(),nums.end());
    //  Why used sets? 
    /*
    As sets are containers that can store unique values.
    **It only stores the key**
    here we needed sets as we needed unique values for a sequence meaning for example you have 0,1,2,1
    if we simply sort and count the sequence you will return 2 as 0,1,1,2 will account 2 as the answer
    but the correct answer is 3 as 0,1,2 collectively accounts for 3 as longest sequence.
    */
    int ans=INT_MIN;
    for(auto &it:s){
        if(!s.count(it-1)){//if in my set left value of a element does not exist that means its the start of the sequence
            int length =1;
            while(s.count(it+length)){
                length++;
            }
            ans=max(ans,length);
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int>input(n);
    for(int i =0;i<n;i++){
        cin>>input[i];
    }
    cout<<longestConsecutive(input);
}