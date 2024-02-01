#include<iostream>
using namespace std;
class treeNode{
    public:
    treeNode *lchild;
    int data;
    treeNode *rchild;
};
class Queue{
    private :
    int size;
    int front;
    int rear;
    treeNode **Q;//[treeNode*]*:Pointer to [Pointer to treeNode]
    public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(treeNode *x);
    treeNode*dequeue();
};
Queue::Queue(int size)
{
    this->size=size;
    front=-1;
    rear=-1;
    Q=new treeNode*[size];
}
Queue ::~Queue()
{
    delete[]Q;
}
bool Queue::isEmpty()
{
    if(front==rear)
    {
    return true;
    }
    return false;
}
bool Queue ::isFull()
{
    if(rear==size-1)
    {
        return true;
    }
    return false;
}
void Queue::enqueue(treeNode* x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
treeNode* Queue::dequeue() {
    treeNode* x = nullptr;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
treeNode *root=new treeNode;
void createTree()
{
    treeNode *p,*t;
    int x;
    Queue q(10);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        p=q.dequeue();
        cout<<"Enter left child of "<<p->data<<" : "<<flush;
        cin>>x;
        if(x!=-1)
        {
            t=new treeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->lchild=t;
            q.enqueue(t);
        }    
        cout<<"Enter right child of "<<p->data<<" : "<<flush;
        cin>>x;
        if(x!=-1)
        {
            t=new treeNode;
            t->data=x;
            t->lchild=t->rchild=nullptr;
            p->rchild=t;
            q.enqueue(t);
        }
        }
}
void preorder(treeNode* p){
    if (p){
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
 
void inorder(treeNode* p){
    if (p){
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}
 
void postorder(treeNode* p){
    if (p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
 
 
int main() {
 
    createTree();
 
    preorder(root);
    cout << endl;
    
    inorder(root);
    cout << endl;
    
    postorder(root);
    cout << endl;
 
    return 0;
}