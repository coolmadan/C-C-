#include"levelwiseinputheader.h"

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
//iterating through each node
bool isPresent(TreeNode<int>*root,int x)
{
    int ans=0;
    if(root->data==x)
        return 1;
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        for(int i=0;i<front->children.size();i++)
        {
            if(front->children[i]->data==x)
              ans=1;
            else
            {
                pendingnodes.push(front->children[i]);
            }
            
        }
    }
    return ans;
    
    
}
int main() {
    TreeNode<int>* root = level_input();
    int x;
    cin >> x;
    cout << (isPresent(root, x) ? "true" : "false");
}