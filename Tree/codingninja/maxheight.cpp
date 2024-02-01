#include"levelwiseinputheader.h"
int getheight(TreeNode<int>*root)
{
    int max=0;
    for(int i=0;i<root->children.size();i++)
    {
        int ans=getheight(root->children[i]);
        if(ans>max)
        max=ans;
    }
    return max+1;
}
int main()
{
    TreeNode<int>*root=level_input();
    int heig=getheight(root);
    cout<<"Height of the tree is : "<<heig;
}