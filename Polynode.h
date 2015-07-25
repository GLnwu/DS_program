/*************************************************************************
    > File Name: Polynode.h
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: 2015年07月23日 星期四 15时32分49秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct Polynode
{
	int coef;
	int exp;
	struct Polynode *next;
}Polynode,* Polylist;

Polylist Polycreate(void)
{
	Polynode * head,*rear,*s;
	int c,e;
	head = (Polynode *)malloc(sizeof(Polynode));	/* 建立多项式的头结点 */
	rear = head;			/* rear始终指向单链表的表尾，便于尾插法的建表 */
	scanf("%d %d",&c,&e);
	while(c!=0)
	{
		s = (Polynode *)malloc(sizeof(Polynode));
		s->coef = c;
		s->coef = e;
		rear->next = s;	/* 在当前表尾做插入 */
		rear = s;
		scanf("%d %d",&c,&e);
	}
	rear ->next = NULL;	/* 将表的最后一个节点next置为NULL，以示表结束 */
	return (head);
}

void Polyadd(Polylist polya,Polylist polyb)
{
	Polynode * p,* q,* tail,*temp;
	int sum;
	p = polya->next;	/* 令p和q分别指向polya和polyb多项式链表的第一个节点 */
	q = polyb->next;
	tail = polya;		/* tail指向和多项式的尾节点 */
				/* 初始化 */

	while(p!=NULL&&q!=NULL)		/* 当两个多项式都为非空的时候 */
	{
		if(p->exp < q->exp)
	}
}

















