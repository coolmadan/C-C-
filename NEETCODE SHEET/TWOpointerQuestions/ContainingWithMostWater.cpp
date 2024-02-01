#include<bits/stdc++.h>
using namespace std;
int containingWithMostWater(vector<int>&heights)
{
    /*
    BRUTE FORCE APPROACH:
        Normal brute force approach would be to calculate every value for each index and get the maximum output.
        Time complexity: O(N^2)
    OPTIMISED APPROACH : TWO POINTER
        1)Define and initialize a start pointer with 0
        2)Define and initialize a end pointer with size -1
        3)Now take the distance between both values
        4)Pick the minimum value from both
            4.1) lets say your height at lp is minimum then :
                increment lp(left pointer) by one
            4.2) if height at rp is minimum then :
                decrement rp(right pointer) by one
        5)Multiply the minimum value with distance and store in ans
        6)Compare this ans with every other ans and get the maximum output
    INTUITION :
        For calculating the area you need to find the length and breadth
        length will be the minimum value amomg both the end and start pointer
        breadth will be the distance between both the pointers
        Now we are ignoring the minimum value after taking it with the paired greater because there can be 
        three cases:(lets say you minimum value is at lp)
        1) Next values can be greater than last value
            lets say you didnt ignore the value at lp pointer and moved rp instead of it
            now when rp value becomes greater but the minmum value will remain lp only right?
            and the distance also got decreased
            thus we already took the best solution for the minmum value
        2) Next value can be smaller than last value
            then the answer will be much smaller
        3) Next value can be equal to the last value
            you already took the value for that case but also the distance would decrease

    */
   //CODE FOR THE SAME :
   int lp =0;
   int rp=heights.size()-1;
   int ans=INT_MIN;
   while(lp<=rp)
   {
    int leftheight=heights[lp];
    int rightheight=heights[rp];
    int dist=rp-lp;
    int minheight=min(leftheight,rightheight);
    int area=minheight*dist;
    ans=max(area,ans);
    if(leftheight<rightheight)
        lp++;
    else
        rp--;
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
    cout<<containingWithMostWater(input);
}