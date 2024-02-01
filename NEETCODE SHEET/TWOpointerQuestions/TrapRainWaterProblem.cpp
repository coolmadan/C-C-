#include<bits/stdc++.h>
using namespace std;
int trapRainWaterProblem(vector<int>&heights)
{
    //BRUTE FORCE APPROACH:
        // For every element present in our vector we will check the right maximum with the help of a loop
        // and a left maximum with the help of another loop and take minimum of both and subtract height[i] from it
        //Formula  : min(leftmax,rightmax)-height[i]
        //TIME COMPLEXITY : O(N^2) because O(N) for traversing each element in our vector and for each element 
        // we are getting right maximum and left maximum and at max we can travel N elements i.e. O(N)
        //Thus time is O(N^2)
        //SPACE COMPLEXITY : O(1)
    //OPTIMIZED APPROACH:
        //TAKE two arrays seperate for leftmax and rightmax and solve accordingly
        //TIME COMPLEXITY:O(N)
        //SPACE COMPLEXITY:O(2*N)
    /*BEST APPROACH: TWO POINTER APPROACH
        1)Take a left pointer at 0
        2)Take a right pointer at end-1
        3)Make a result variable and intialize it with 0
        4)Check if value at leftpointer is less than right pointer 
            4.1) if value at leftpointer is greater than leftmax
                4.1.1)make leftmax= height[leftpointer]
            4.2)else :(Value at leftpointer is less than leftmax)
                4.2.1)result+=leftmax-height[i]
            4.3)now increment the leftpointer value by 1
        5)else :(when value at right pointer is less than left pointer)
            5.1)if value at rightpointer is greater than rightmax :
                5.1.1)make rightmax=height[rightpointer]
            5.2)else :(value at rightpointer is less than rightmax)
                5.2.1)result+=rightmax-height[i]
            5.3)now decrement the rightpointer value by 1
      */  
     int rightmax=INT_MIN;
     int leftmax=INT_MIN;
     int rp=heights.size()-1;
     int lp=0;
     int result=0;
     while(lp<rp)
     {
        if(heights[lp]<heights[rp])
        {
            if(heights[lp]>leftmax)
                leftmax=heights[lp];
            else
            {
                result+=leftmax-heights[lp];
            }
            lp++;
        }
        else
        {
            if(heights[rp]>rightmax)
                rightmax=heights[rp];
            else
            {
                result+=rightmax-heights[rp];
            }
            rp--;
        }
     }
     return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>input(n);
    for(int i =0;i<n;i++)
        cin>>input[i];
    cout<<trapRainWaterProblem(input);
}