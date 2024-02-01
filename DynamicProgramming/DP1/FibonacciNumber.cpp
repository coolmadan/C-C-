#include<bits/stdc++.h>
using namespace std;
int fibo_3(int n)//Dynamic Programming(Bottom-Up approach)
{
    int ans[n+1];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++)
    {
        ans[i]=ans[i-1]+ans[i-2];
    } 
    return ans[n];
}
int rec_Fibonacci(int n)// Brute force approach
{
    //Base Condition
    if(n<=1)
    return n;
    //Small Calculation
    int a = rec_Fibonacci(n-1);
    int b=rec_Fibonacci(n-2);
    return a+b;
}
int Helper(int * arr,int n)//Memoization Approach (Top-down Approach)
{
    //Base Condition
    if(n<=1)
    return n;
    //Check if output already exists
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    //If doesn't exist calculate the output
    int a = Helper(arr,n-1);
    int b =Helper(arr,n-2);
    //Store the output for future use
    arr[n]=a+b;
    //Return the final output
    return arr[n];
}
int Fibonacci(int n)
{
    int * arr=new int [n+1];
    for(int i=0;i<n+1;i++)
    arr[i]=-1;
    return Helper(arr,n);
}
int main()
{
    int n;
    cin>>n;
    cout<<rec_Fibonacci(n)<<endl;
    cout<<Fibonacci(n)<<endl;
}