#include<iostream>
#include"treenode.h"
using namespace std;
TreeNode<int> * takeInput()
{
    int rootData;
    cout<<"Enter data : ";
    cin>>rootData;
    TreeNode<int>*root=new TreeNode<int>(rootData);
    int n;
    cout<<"Enter number of children for : "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>*child=takeInput();
        root->children.push_back(child);
    }
    return root;


}
void print(TreeNode <int>*root)
{
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}
int main()
{
    /*TreeNode<int>*root=new TreeNode<int>(1);
    TreeNode<int>*node1=new TreeNode<int>(2);
    TreeNode<int>*node2=new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    cout<<"root :"<<root->data<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" "<<endl;
    }
    delete(root);
    delete(node1);
    delete(node2);
    */
   TreeNode<int>*root=takeInput();
   print(root);

}