#include<bits/stdc++.h>
using namespace std;
int solution3(int n)//Dynamic Programming Approach
{
    int *arr=new int[n+1];
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    int b,c;
    for(int i=4;i<n+1;i++)
    {
        b=c=INT_MAX;
        if(arr[i]%3==0)
        b=arr[i/3];
        else if(arr[i]%2==0)
        c=arr[i/2];
        arr[i]= 1+min(arr[n-1],min(b,c));
    }
    return arr[n];
}
int solution1(int n)//recursive approach
{
    //Base Condition
    if(n==1)
    return 0;
    int a=INT_MAX,b=a,c=a;
    if(n%3==0)
    a=solution1(n/3);
    else if(n%2==0)
    b=solution1(n/2);
    else
    c=solution1(n-1);
    return 1+min(a,min(b,c));

}

int solution2helper(int *arr,int n)//Memoization approach helper
{
    //Base Condition
    if(n==1)
    return 0;
    //Check if the value already exists or not
    if(arr[n]!=-1)
    return arr[n];
    //Calculate and save the value
    int a=INT_MAX,b=a,c=a;
    if(n%3==0)
    a=solution2helper(arr,n/3);
    else if(n%2==0)
    b=solution2helper(arr,n/2);
    else
    c=solution2helper(arr,n-1);
    
    arr[n]=1+min(a,min(b,c));
    return arr[n];
}
int solution2(int n)//Memoization Approach
{
    int *arr=new int[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=-1;
    }
    return solution2helper(arr,n);
}
int main()
{
    int n;
    cin>>n;
    cout<<solution3(n);

}