#include<bits/stdc++.h>
using namespace std;
int solution1(int **input,int row,int col)
{
    int **arr=new int*[row];
    for(int i=0;i<col;i++)
    {

    }
}
int main()
{
    int row,col;
    cin>>row>>col;
    int **arr= new int*[row];
    for(int i=0;i<row;i++)
    {
       arr[i]=new int [col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<solution1(arr,row,col);

}