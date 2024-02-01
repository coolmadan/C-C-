#include"levelwiseinputheader.h"
void preorderprint(TreeNode<int>*root)
{
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        preorderprint(root->children[i]);
    }
}
// 1 2 2 3 2 4 5 2 6 7 0 0 0 0
int main()
{
    TreeNode<int>*root=level_input();
    preorderprint(root);
}