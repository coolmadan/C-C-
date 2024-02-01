#include"levelwiseinputheader.h"
int count_Leaf(TreeNode<int>*root)
{
    int ans=0;
    if(root->children.size()==0)
    return 1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=count_Leaf(root->children[i]);
    }
    return ans;
}
int getLeafNodeCount(TreeNode<int>* root) {
    // Write your code here
    int ans=0;
    if(root->children.size()==0)
        return 1;
    for(int i=0;i<root->children.size();i++)
    {
        ans+=getLeafNodeCount(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode<int>*root=level_input();
    cout<<count_Leaf(root)<<endl;
    cout<<getLeafNodeCount(root);
}