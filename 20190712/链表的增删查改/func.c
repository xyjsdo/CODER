#include "func.h"

void list_head_insert(pstu *pphead,stu **pptail, int i)
{
	pstu pnew = (pstu)malloc(sizeof(stu));//����һ���ṹ���С�Ŀռ�
	memset(pnew,0,sizeof(stu));
	pnew->num=i;
	
	if (NULL==*pphead)
	{
		*pphead = pnew;
		*pptail = pnew;
	}
	else
	{
		pnew->pnext = *pphead;//ԭ���������ͷ���½ڵ�pnext
		*pphead = pnew;//���ǵ��½ڵ���ͷ

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