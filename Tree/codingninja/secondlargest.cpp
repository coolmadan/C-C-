#include"levelwiseinputheader.h"
int maximum(TreeNode<int>*root)
{
    int max=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        int ans=maximum(root->children[i]);
        if(ans>max)
        max=ans;

    }
    return max;
}
TreeNode<int>* second_Largest(TreeNode<int>*root)
{
    int mx=maximum(root);
   cout<<mx;
   // TreeNode<int>*max=new TreeNode<int>(mx);
   TreeNode<int>*ans=new TreeNode<int>(INT_MIN);
    TreeNode<int>*temp=NULL;
    // jitti bhi choti value usme se sbse bdi hogi second largest
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
   {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
    for(int i=0;i<front->children.size();i++)
    {   
        if(front->children[i]->data<mx)
        {
            temp=root->children[i];
            if( temp->data>ans->data)
            ans=temp;
        }
        pendingnodes.push(front->children[i]);
    }
}
return ans;
}
TreeNode<int>* mximum(TreeNode<int>*root)
{   TreeNode<int>*max=new TreeNode<int>(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*child=new TreeNode<int>(root->children[i]->data);
        if(child->data>max->data)
        max=child;
    }
    return max;

}
TreeNode<int>* helper(TreeNode<int>*root)
{
    TreeNode<int>*max=new TreeNode<int>(root->data);
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int>*child=new TreeNode<int>(root->children[i]->data);
        if(child->data>max->data)
        max=child;
    }
    max->data=INT_MIN;
    TreeNode<int>*ans=mximum(root);
    return ans;
}
template<typename T>
class Custom
{
    public:
    TreeNode<T> *max;
    TreeNode<T> *smax;

};
TreeNode<int>*solution(TreeNode<int>*root)
{
    Custom<int>*m;
    for(int i=0;i<root->children.size();i++)
    {

    }
}
int main()
{
    TreeNode<int>*root=level_input();
   cout<<(helper(root))->data;
   
}