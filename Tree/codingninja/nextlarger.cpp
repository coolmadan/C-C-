#include"levelwiseinputheader.h"
void nextLarger(TreeNode<int>*root,int x)
{
    int array[100];
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    int i=0;
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        array[i]=front->data;
        for(int j=0;j<front->children.size();j++)
        {
            TreeNode<int>*child=new TreeNode<int>(front->children[i]->data);
            if(child->data>x)
            {array[i]=child->data;
            i++;

            }
            pendingnodes.push(front->children[i]);

        }
   
    }
    for(int i=0;i<10;i++)
    cout<<array[i];
}
//iterate through every node and check if the value is greated than x or not
//and if the value is greater than than put it in temp and compare it with another variable ans 
//if the temp value is smaller than ans than update ans, now similarly iterate over the other nodes
TreeNode<int>* next_Larger(TreeNode<int>*root,int x)
{
    TreeNode<int>*ans= new TreeNode<int>(INT_MAX);
    queue<TreeNode<int>*>pendingnodes;
    TreeNode<int>*temp=new TreeNode<int>(root->data);
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        for(int i=0;i<front->children.size();i++)
        {
            if(front->children[i]->data>x)
                {   temp=front->children[i];
                if(temp->data<ans->data)
                ans=temp;
                }
                pendingnodes.push(front->children[i]);
        


        }
        
    }
    return ans;
}
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {//updated code
    // Write your code here
    
    if(root->children.size()==0)
        return root;
     TreeNode<int>*ans= new TreeNode<int>(INT_MAX);
    queue<TreeNode<int>*>pendingnodes;
    TreeNode<int>*temp=new TreeNode<int>(root->data);
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        for(int i=0;i<front->children.size();i++)
        {
            if(front->children[i]->data>x)
                {   temp=front->children[i];
                if(temp->data<ans->data)
                ans=temp;
                }
                pendingnodes.push(front->children[i]);
        
		}        
    }
    if(ans->data==INT_MAX)
        return NULL;
    return ans;
    
}
//recursive solution
int main()
{
    TreeNode<int>*root=level_input();
    int x;
    cout<<"Enter the element whose just larger you want to find : ";
    cin>>x;
    cout<<(next_Larger(root,x))->data;
}