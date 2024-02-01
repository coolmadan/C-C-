#include"levelwiseinputheader.h"
void postorderprint(TreeNode<int>*root)
{
    if(root==NULL)//not a base case simply an edge case that we are handling becuase even instead of this case recursion will always occur
    return;
    for(int i=0;i<root->children.size();i++)
    postorderprint(root->children[i]);
    cout<<root->data<<" ";
}
int main()
{
    TreeNode<int>*root=level_input();
    postorderprint(root);
}