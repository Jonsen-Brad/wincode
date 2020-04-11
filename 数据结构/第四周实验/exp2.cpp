#include <iostream>
#include <stdio.h>
#define scanf_s scanf

typedef struct node 
{
	int data;
	struct node *next;
}linklist,*link;

void buildlist(linklist *l)      //采用尾插法建立单链表，以0结束
{
	link p,t;
	int e;
	t=l;
	
	scanf_s("%d",&e);
	while (e!=0)//
	{   
		p=(struct node *)malloc(sizeof(struct node));
		p->next =NULL;
		p->data =e;
		t->next =p;
		t=p;
		scanf_s("%d",&e);
	}
}

void disp(link l)
{
	link p;
	p=l->next ;//
	while (p!=NULL)//
	{
		printf("%6d",p->data );
	    p=p->next ;//
	}
}

void deletlink(struct node *l)       //删除重复元素
{
	struct node *p,*pre,*t;         //辅助指针pre用于t 的前驱，t是pre 的后继
	p=l->next ;
	while(p)    //为什么要建立双重循环
	{
		pre=p;
		t=p->next ;//
		while(t)//
		{
			while((t != NULL)&&(t->data == p->data))
				{
					pre->next = t->next;//
					t=t->next ;//
			}
			pre=t;//
			t=t==NULL?t:t->next ;
		}
		p=p->next ;//
	}
}

int main()
{
	int e;
	link l;
	l=(struct node *)malloc(sizeof (struct node));
	l->next =NULL;
	buildlist(l);
	disp(l);
	deletlink(l);
	disp(l);
}
