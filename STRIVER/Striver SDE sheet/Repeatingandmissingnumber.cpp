#include<bits/stdc++.h>
using namespace std;
int isSolution(vector<int>num)
{
    //edge case
    if( num.size()==0)
        return -1;
    int i =num[0];
    //num = 1 ,2 ,3, 2
    while(i<=num.size())
    {
        if(i<0)
            return 
        i=num[i];
        num[i]=-num[i];


    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i = 0 ;i<n;i++)
        cin>>vec[i];
   cout<< isSolution(vec);
}