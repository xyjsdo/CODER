#include "func.h"

void list_head_insert(pstu *pphead,stu **pptail, int i)
{
	pstu pnew = (pstu)malloc(sizeof(stu));//申请一个结构体大小的空间
	memset(pnew,0,sizeof(stu));
	pnew->num=i;
	
	if (NULL==*pphead)
	{
		*pphead = pnew;
		*pptail = pnew;
	}
	else
	{
		pnew->pnext = *pphead;//原来的链表的头给新节点pnext
		*pphead = pnew;//我们的新节点变成头

	}

}

void print_list(pstu phead)
{
	while (phead != NULL)
	{
		printf("%3d", phead->num);
		phead = phead->pnext;
	}
	printf("\n");
}