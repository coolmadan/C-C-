//Problem : To find the first negative number in the every window of size k in a given array
#include<bits/stdc++.h>
using namespace std;
void firstNegativeNumberinWindowK(vector<int>&nums,int k)
{
    //Use the sliding window technique to solve this question
    // Because I noticed that I am given with a array and a window of size k
    // Approach: Sliding Window Approach
    // 1)Took a starting and a ending pointer at 0th index
    // 2)Created a empty queue
    // 3)Case 1 : We will check for negative numbers in the first window
    //     We push every negative element we got in the queue
    // 4)Case 2 : We will check if the 
    int sp=0,ep=0;
    queue<int>pn;
    while(ep<nums.size())//end pointer less than size of array
    {
        if(nums[ep]<0)//finding negative number 
            pn.push(nums[ep]);//pushing in queue
        if(ep-sp+1<k)
            ep++;
        else if(ep-sp+1==k)//when you have a window of size k
        {
            if(pn.size()==0)//if you queue is empty meaning no negative present in hte particular window
                cout<<0<<" ";
            else{ //if not empty meaning atleast one negative number is present in your queue
                cout<<pn.front()<<" ";
                if(pn.front()==nums[sp])//checking if the element present at the front of the queue is also the same element present at the starting index 
                    pn.pop();//then pop the element from the queue
            }
            sp++;
            ep++;
        }

    }
}
int main()
{
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int  i =0;i<n;i++)
    {
        cin>>nums[i];
    }
    int k;
    cin>>k;
    firstNegativeNumberinWindowK(nums,k);
}
