#include<iostream>
#include"levelwiseinputheader.h"
using namespace std;
int sumofNodes(TreeNode<int>*root)
{
    int ans=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=sumofNodes(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode<int>*root= level_input();
    cout<<"sum = "<<sumofNodes(root);
}