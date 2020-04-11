#include<iostream>
using namespace std;
typedef struct node{
    char data;
    struct node *lchild;
    struct node *rchild;
    struct node *parent;
}*BiTree;

void Preorder (BiTree T){
    if(T){
        cout << T->data;
        Preorder(T->lchild);
        Preorder(T->rchild);
    }
}

void Preorder(BiTree T){
    if(T){
        if(T->lchild){
            T = T->lchild;
            Preorder(T);
        }
        if(T->rchild){
            cout << T->data;
            Preorder(T->parent->rchild);
            Preorder(T->rchild);
            T = T-
        }
        else{
            cout << T->data;
            T = T->parent;
            cout << T->data;
            Preorder(T->rchild);
            
        }
    }
    
}
//LDR
void Preorder(BiTree T){
    if(T){
        if(T->lchild||T->rchild){
            Preorder(T->lchild);
            cout << T->data;
            Preorder(T->rchild);
            
        }
        else{
            cout << T->data;
        }
    }
}