#include<iostream>
#include<queue>
#include"treenode.h"
using namespace std;
TreeNode<int>*level_input()
{
int rootdata;
cout<<"Enter root data : ";
cin>>rootdata;
TreeNode<int>*root=new TreeNode<int>(rootdata);
queue<TreeNode<int>*>pendingnodes;
pendingnodes.push(root);
while(pendingnodes.size()!=0)
{
    TreeNode<int>*front=pendingnodes.front();
    pendingnodes.pop();
    int n;
    cout<<"Enter number of child for "<<front->data<<" : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int childdata;
        cout<<"Enter the data for "<<i<<"th child for "<<front->data<<" : ";
        cin>>childdata;
        TreeNode<int>*child=new TreeNode<int>(childdata);
        front->children.push_back(child);
        pendingnodes.push(child);
    }
}
return root;
}
void print(TreeNode <int>*root)
{
    cout<<"Data : ";
    cout<<root->data;
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
void print_Levelwise(TreeNode<int>* root)
{
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<" : ";
        for(int i=0;i<front->children.size();i++)
        {
            cout<<front->children[i]->data<<",";
            pendingnodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
int main()
{
    TreeNode<int>*x=level_input();
    print_Levelwise(x);
}