#include"levelwiseinputheader.h"
bool structurallyIdentical(TreeNode<int>*root1,TreeNode<int>*root2)
{
   // bool ans=false;
    if(root1->data!=root2->data)
    return false;
    if(root1->children.size()!=root2->children.size())
    return false;
    bool ans= true;
    for(int i=0;i<root1->children.size();i++)
    {
        bool smallans=structurallyIdentical(root1->children[i],root2->children[i]);
        if(smallans==false)
        {
            ans=smallans;
            return ans;
        }
    }
    return ans;

}
// coding ninja solution
bool areIdentical(TreeNode<int>*root1,TreeNode<int>*root2)
{
    if(root1==NULL&& root2==NULL)
    return false;
    if(root1->data!=root2->data||(root1->children.size()!=root2->children.size()))
    return false;
    if(root1==NULL&&root2!=NULL||(root1!=NULL && root2==NULL))
    return false;
    for(int i=0;i<root1->children.size();i++)
    {
        TreeNode<int>*child1= root1->children[i];
        TreeNode<int>*child2=root2->children[i];
        if(!areIdentical(child1,child2))
        return false;
    }
    return true;
}
int main()
{
    TreeNode<int>*root1=level_input();
    TreeNode<int>*root2=level_input();
    cout<<structurallyIdentical(root1,root2);
}