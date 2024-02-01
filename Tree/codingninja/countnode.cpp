#include<iostream>
#include"levelwiseinputheader.h"
using namespace std;
int count=0;
void count_Nodes(TreeNode<int>*root)
{
    for(int i=0;i<root->children.size();i++)
    {
        count++;
    }
    for(int i=0;i<root->children.size();i++)
    count_Nodes(root->children[i]);
}
int numNode(TreeNode<int>*root)
{
    int ans=1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=numNode(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode<int>*root=level_input();
    count_Nodes(root);
    cout<<count+1<<" ";
    cout<<numNode(root);
}