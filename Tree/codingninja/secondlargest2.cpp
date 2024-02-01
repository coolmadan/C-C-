#include"levelwiseinputheader.h"
template<typename T>
class Custom
{
    public:
    TreeNode<T>*m;
    TreeNode<T>*sm;
    Custom(TreeNode<T>*m,TreeNode<T>*sm)
    {
        this->m=m;
        this->sm=sm;
    }
};
Custom<int>* solution(TreeNode<int> * root)
{
    
    //Custom<int>ans2(root,NULL);
    if(root==NULL)
    {
        return new Custom<int>(NULL,NULL);
    }
    Custom<int>*ans=new Custom<int>(root,NULL);
    for(int i=0;i<root->children.size();i++)
    {
        Custom<int>*child=solution(root->children[i]);
        if(child->m->data>ans->m->data)
        {
            if(child->sm==NULL)
            {
                ans->sm=ans->m;
                ans->m=child->m;
                
            }
            else
            {
                if(child->sm->data>ans->m->data)
                {
                    ans->sm=child->sm;
                    ans->m=child->m;
                }
                else{
                    ans->sm=ans->m;
                    ans->m=child->m;
                }
            }
        }
        else 
        {
            if(ans->m->data!=child->m->data&&(ans->sm==NULL||child->m->data>ans->sm->data))
            {
                ans->sm=child->m;
            }
        }

    }
    return ans;
}
int main()
{
    TreeNode<int>*root=level_input();
    Custom<int>*sol=solution(root);
    cout<<(sol->sm->data);

}