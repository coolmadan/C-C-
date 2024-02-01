#include<iostream>
using namespace std;
struct treeNode
{
    struct treeNode * lchild;
    int data;
    struct treeNode *rchild;
};
struct Queue
{
    int size;
    int front;
    int rear;
    treeNode **Q;
};
struct stack
{
    int size;
    int top;
    int *S;
};
struct treeNode *root=NULL;

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q= (treeNode**)malloc(q->size*sizeof(treeNode*));
}
void Enqueue(struct Queue *q, treeNode *x)
{
    if((q->rear+1)%q->size==q->front)
        cout<<"Queue is full"<<endl;
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
treeNode *Dequeue(struct Queue *q)//the return type of the function dequeue is treeNode * it means that the queue will return pointer of type treeNode 
{   treeNode *x=NULL;
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
    create (&q,10);
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
        cout<<"Enter Right child of"<<
    }
}
int main()
{

}