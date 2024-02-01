#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> vtr;
    int n,m;
    cout<<"Number of rows :";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        vector<int>v1;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            v1.push_back(x);
        }
        vtr.push_back(v1);
    }
    for(int i=0;i<vtr.size();i++)
    {
        for(int j=0;j<vtr[i].size();j++)
        {
            cout<<vtr[i][j]<<" ";
        }
        cout<<endl;
    }

}