#include<cstdio>
//#include<stdio.h>
#define ElemType int

typedef struct node{
    ElemType data;
    struct node *left;
    struct node *right;
}*BiTree;
//先序遍历
void PreOrderTravel(BiTree T){
    if(T == NULL)
        return;
    printf("%c",T->data);
    PreOrderTravel(T->left);
    PreOrderTravel(T->right);
}
//中序遍历
void InOrderTravel(BiTree T){
    if(T == NULL)
        return;
    InOrderTravel(T->left);
    printf("%c",T->data);
    InOrderTravel(T->right);
}
//后序遍历
void TailOrderTravel(BiTree T){
    if(T == NULL)
        return;
    TailOrderTravel(T->left);
    TailOrderTravel(T->right);
    printf("%c",T->data);
}