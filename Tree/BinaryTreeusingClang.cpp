#include<iostream>
using namespace std;
struct treeNode
{
    struct treeNode *lchild;
    int data;
    struct treeNode *rchild;
};
struct Queue 
{
    int size;
    int front;
    int rear;
    treeNode **Q;//Double pointer *Q is for array which is used in Queue and treeNode **Q means it will store pointer of type treeNode
};
struct treeNode *root=NULL;
/*void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}
void Enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
        cout<<"Queue is full"<<endl;
    else
    {
        q->Q[q->rear]=x;
    }
}
int Dequeue(struct Queue *q)
{
    int x=-1;
    if(q->rear==q->front)
        cout<<"Queue is empty"<<endl;
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}*/
void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(treeNode**)malloc(q->size*sizeof(treeNode *));
}
void Enqueue(struct Queue *q,treeNode* x)
{
    if((q->rear+1)%q->size==q->front)
        cout<<"Queue is full"<<endl;
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
treeNode *Dequeue(struct Queue *q)
{   treeNode* x=NULL;
    if(q->front==q->rear)
    cout<<"Queue is empty"<<endl;
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}
void createTree()
{
    struct treeNode *p,*t;
    int x;
    struct Queue q;
    create(&q,10);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root=new treeNode;
    root->data=x;
    root->lchild=root->rchild=NULL;
    Enqueue(&q,root);
    while(!isEmpty(q))
    {
        p=Dequeue(&q);
        cout<<"Enter Left child of "<<p->data;
        cin>>x;
        if(x!=-1)
        {
            t=new treeNode;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            Enqueue(&q,t);
        }
        cout<<"Enter Right child of "<<p->data;
        cin>>x;
        if(x!=-1)
        {
            t=new treeNode;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            Enqueue(&q,t);
        }
    }
}
void Preorder(struct treeNode*p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Inorder(struct treeNode*p)
{
    if(p)
    {
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}
void Postorder(struct treeNode*p)
{
    if(p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
int main()
{
    createTree();
    Preorder(root);
    cout<<endl<<"Post Order";
    Postorder(root);
    return 0;
}

