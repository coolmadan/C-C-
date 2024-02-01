#include<bits/stdc++.h>
using namespace std;
int dp2(vector<int>&wt,vector<int>&val,int n, int W)
{
    int dp2[1002][1002];
    //Changing base condition to initilaisation
    for(int i =0;i<n+1;i++)
        for(int j =0;j<W+1;j++)
            dp2[i][j]=0;
    //Now write your choice diagram 
    for(int i =1;i<n+1;i++)
        for(int j =1;j<W+1;j++)
        {
            //Condition are same as in choice diagram
            if(wt[i-1]<=W)
                dp2[i][j]=max(val[i-1]+dp2[i-1][j-1],dp2[i-1][j]);
        }
}
int dp[1002][1002];
memset(dp,-1,sizeof(dp));
int KnapSack_mem(vector<int>&wt,vector<int>&val,int n,int W)
{
    if(n==0||W==0)
        return 0;
    if(dp[n][W]!=-1)
        return dp[n][W];
    else if(wt[n-1]<=W)
    return dp[n][W]= max(val[n-1]+KnapSack_mem(wt,val,n-1,W-wt[n-1]),KnapSack_mem(wt,val,n-1,W));
    else 
    return dp[n][W]=KnapSack_mem(wt,val,n-1,W);
}
int KnapSack_rec(vector<int>&wt,vector<int>&val,int n,int W)
{
    /*
    Now since I need to solve this question recursively 
    I need a base condition which I can get by considering the smallest valid inputs */
    if(n==0||W==0)//Smallest Valid Input can be either you have no capacity to store items or you don't have any items to store in the bag
        return 0;//In both case I need to return 0 
    //Now you need to code you choice diagram
    //when your item weight is greater than capacity then you need not take the item in bag
    //and when your item weight is less than capacity then you are left with two choice of either we take the bag
    //or either we don't and thus return the maximum profit
    //Case 1: when your item weight is greater than capacity:
    if(wt[n-1]>W)
        return KnapSack_rec(wt,val,n-1,W);
    else//when your item weight is less than or equal to capacity of your knapsack
    //choice 1: you take it and choice to ou don't and from both choices I need to eturn the maximum
    return max(val[n-1]+KnapSack_rec(wt,val,n-1,W-wt[n-1]),KnapSack_rec(wt,val,n-1,W));

}
int main()
{
    int n;
    cin>>n;
    vector<int>wt(n);
    vector<int>val(n);
    for(int i =0;i<n;i++)
        cin>wt[i];
    for(int i=0;i<n;i++)
        cin>>val[i];
    int W;
    cin>>W;
    cout<<KnapSack_rec(wt,val,n,W);

}