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
	pstu pcur, ppre;
	pstu pnew = (pstu)calloc(1, sizeof(stu));
	pnew->num = i;
	pcur = ppre = *pphead;
	if (NULL == *pphead)
	{
		*pphead = pnew;
		*pptail = pnew;
	}
	else if (i < pcur->num)
	{
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
	else {
		while (pcur) {//中间插入
			if (i < pcur->num)
			{
				ppre->pnext = pnew;
				pnew->pnext = pcur;
				break;
			}
			ppre = pcur;
			pcur = pcur->pnext;
		}	
		if (NULL == pcur)//因为没有插入到中间，尾插法
		{
			ppre->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//有序插入2
void list_sort_insert2(pstu* pphead, pstu* pptail, int i)
{
	pstu pcur;
	pstu pnew = (pstu)calloc(1, sizeof(stu));
	pnew->num = i;
	pcur = *pphead;
	if (NULL == *pphead)
	{
		*pphead = pnew;
		*pptail = pnew;
	}
	else if(i<pcur->num)//插入到头部
	{
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
	else {
		while (pcur->pnext)//插入到中间
		{
			if (i < pcur->pnext->num)
			{
				pnew->pnext = pcur->pnext;
				pcur->pnext = pnew;
				break;
			}
			pcur = pcur->pnext;
		}
		if (pcur->pnext == NULL)
		{
			pcur->pnext = pnew;
			*pptail = pnew;
		}
	}
}