#include<bits/stdc++.h>
using namespace std;
//using recursion
int minBalancedTrees(int h)
{
/*
Since we studied that the solution for our problem depends on the height of left subtree and right subtree.
There can exist three cases for our solution :
1) h-1 and h-1//height of left subtree and right subtree
2) h-1 and h-2
3) h-2 and h-1

*/
//base condition
if(h==0||h==1)
    return 1;
return minBalancedTrees(h-1)*(2*minBalancedTrees(h-2)+minBalancedTrees(h-1));

}
int minBalancedTreesDP(int *arr,int h)
{
    
}
int main()
{
    int h;
    cin>>h;
    cout<<minBalancedTrees(h);
}