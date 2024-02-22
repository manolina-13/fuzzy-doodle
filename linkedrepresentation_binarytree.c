#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
}typedef node;

node * createNode(int data){
     node *n;// creating a node pointer
     n=(node *)malloc(sizeof(node));//allocating memory
     n->data=data;//setting the data
     n->lchild=NULL;//linking the left and right child to NULL
     n->rchild=NULL;
     return n;//returning the node to main function
}


int main(){
    node * root;
    root=(node*)malloc(sizeof(node));
    root=createNode(4);
    node *p1=createNode(1);
    node *p2=createNode(6);
    node *p3=createNode(5);
    node *p4=createNode(2);

    //linking the root node with left and right child
    root->lchild=p1;
    root->rchild=p2;
    //linking the p1 node with p3 and p4
    p1->lchild=p3;
    p1->rchild=p4;
    
    return 0;
}
