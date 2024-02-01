#include<iostream>
#include"levelwiseinputheader.h"
using namespace std;
int maxOfNodes(TreeNode<int>*root)//return the maximum value of tree
{
    int ans=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        ans=max(ans,maxOfNodes(root->children[i]));
    }
    return ans;
}
//but what we were asked to return was return the node with maximum value
TreeNode<int>*maxNodes(TreeNode<int>*root)//without recursion using queue
{
    TreeNode<int>*max=new TreeNode<int>(INT_MIN);
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front= pendingnodes.front();
        pendingnodes.pop();
        if(front->data>max->data)
        {
            max=front;
        }
        for(int i=0;i<front->children.size();i++)
        {
            pendingnodes.push(front->children[i]);
        }
    }
    return max;
}
//recursive function to perform the above operation i.e to get the node with maximum data
TreeNode<int>*mxofNodes(TreeNode<int>*root)
{
    TreeNode<int>*max=new TreeNode<int>(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*child=mxofNodes(root->children[i]);
        if(child->data>max->data)
        max=child;
    }
    return max;
}
TreeNode<int>*maxx(TreeNode<int>*root)
{
    TreeNode<int>*max=new TreeNode<int>(INT_MIN);
  //  TreeNode<int>*ans=new TreeNode<int>(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*ans=new TreeNode<int>(root->children[i]->data);
        if(ans->data>max->data)
        max=ans;
    }
    for(int i=0;i<root->children.size();i++)
    maxx(root->children[i]);
    return max;
}
int main()
{
    TreeNode<int>*root= level_input();
    cout<<maxOfNodes(root)<<endl;
    cout<<(maxNodes(root))->data<<endl;
    cout<<(mxofNodes(root))->data<<endl;
    cout<<maxx(root);
}