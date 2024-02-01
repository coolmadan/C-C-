#include"levelwiseinputheader.h"
TreeNode<int>* getLargecount(TreeNode<int>*root)
{
    TreeNode<int>*mx=new TreeNode<int>(INT_MIN);
    TreeNode<int>*ans=new TreeNode<int>(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        ans->data=ans->data+root->children[i]->data;
        if(ans->data>mx->data)
        mx=root;
    }
    for(int i=0;i<root->children.size();i++)
    {
        getLargecount(root->children[i]);
    }
    return mx;
}
int main()
{
    TreeNode<int>*root= level_input();
    cout<<(getLargecount(root))->data;
}