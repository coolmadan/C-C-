#include<iostream>
using namespace std;
void multiply(int x, int y,int m,int n)
int main()
{
    int x,y,m,n;
    cin>>x>>y;
    cin>>m>>n;
    int arr1[x][y];
    int arr2[m][n];
    int res[x][n];
    for(int i=0;i<x;i++)
    {
        for(int j =0;j<y;j++)
        {
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            cin>>arr1[m][n];
        }
    }


}