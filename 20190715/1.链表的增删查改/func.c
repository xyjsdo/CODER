#include "func.h"

//链表插入：头插法
void list_head_insert(pstu* pphead, pstu* pptail, int i)
{
	pstu pnew = (pstu)malloc(sizeof(stu));//申请一个结构体空间
	memset(pnew, 0, sizeof(stu));
	pnew->num = i;
	if (*pphead == NULL) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		pnew->pnext = *pphead;//将新节点指向之前的节点
		*pphead = pnew;	//原来的头指针指向新节点
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

//链表插入：尾插法
void list_tail_insert(pstu* pphead, pstu* pptail, int i)
{
	pstu pnew = (pstu)calloc(1, sizeof(stu));
	pnew->num = i;
	if (NULL == *pphead)
	{
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		(*pptail)->pnext = pnew;
		*pptail = pnew;
	}
}

//有序插入
void list_sort_insert(pstu* pphead, pstu* pptail, int i)
{

}