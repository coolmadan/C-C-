#include"levelwiseinputheader.h"
void printathead(TreeNode<int>*root,int d)
{
    if(root==NULL)
    cout<<"0";
    int ans=d;
    for(int i=0;i<root->children.size();i++)
    {
        if(d==1)
        cout<<root->children[i]->data<<" ";
        else
        {
            d=d-1;
            printathead(root->children[i],d);
        }
    }
}
//recursive approach
void printatLevelk(TreeNode<int>*root,int k)
{
    if(root==NULL)
    return ;
    if(k==0)
    {
        cout<<root->data<<" ";
        return ;
    }
    for(int i=0;i<root->children.size();i++)
    {
        printatLevelk(root->children[i],k-1);
    }
}
int main()
{
    TreeNode<int>*root=level_input();
    int d;
    cout<<"enter depth to print at : ";
    cin>>d;
   // printathead(root,d);
    printatLevelk(root,d);
}