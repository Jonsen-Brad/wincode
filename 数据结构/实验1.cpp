#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct      //定义顺序表存储结构
{
    int a[100];        //设顺序表只存整数，最大一百个元素
    int len;
}sqlist, * sq;

void ini_sq(sq l)             //初始化函数
{
    l->len=0;
}

int creat_sq(sq l)
{
    int x;
    scanf_s("%d", &x);
    while (x != 0)
    {
        l->a[l->len] = x;
        scanf_s("%d", &x);
        l->len++;
    }
    return 0;
}

int find_sqlist(sq l, int e)
{
    int i;
    for (i = 0; i < l->len; i++)
    {
        if (l->a[i] == e) return i;
    }
    if (i > l->len-1) return -1;

}

int insert_sq(sq l, int e)
{
    l->a[l->len] = e;
    ++l->len;
    return 1;
}

int delet_sq(sq l, int n)
{
    int i;
    if (n < 1 || n>l->len)   return -1;
    {  for (i = n; i < l->len; i++)
        l->a[i] = l->a[i + 1];
        --l->len;
    return 1;
    }
}

void disp(sq l)
{
    int i;
    for (i = 0; i < l->len; i++)
    {
        printf("%6d", l->a[i]);
    }
}
#include <stdio.h>
using namespace std;
void main()
{
    sqlist* l;
    l = (sqlist*)malloc(sizeof(sqlist));
    ini_sq(l);
    creat_sq(l);
    disp(l);
    int x;
    scanf_s("%d", &x);
    int i;
    i = find_sqlist(l, x);
    if (i == -1)
        insert_sq(l, x);
    else
        printf("%d\n",i+1);//?
    disp(l);
}
