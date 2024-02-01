#include<bits/stdc++.h>
using namespace std;
int solution(int arr[],int n)
{
    int temp;
    int result=0;
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=i;j<n;j++)
        {
            temp+=arr[j];
            result+=temp;
        }
        cout<< temp<<" "<<result<<endl;
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solution(arr,n);
}