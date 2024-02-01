#include<vector>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children;
    TreeNode(T data)//constructor
    {
        this->data=data;
    } 
    ~TreeNode() {//destructor
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
    }
};