#include "func.h"

//������룺ͷ�巨
void list_head_insert(pstu* pphead, pstu* pptail, int i)
{
	pstu pnew = (pstu)malloc(sizeof(stu));//����һ���ṹ��ռ�
	memset(pnew, 0, sizeof(stu));
	pnew->num = i;
	if (*pphead == NULL) {
		*pphead = pnew;
		*pptail = pnew;
	}
	else {
		pnew->pnext = *pphead;//���½ڵ�ָ��֮ǰ�Ľڵ�
		*pphead = pnew;	//ԭ����ͷָ��ָ���½ڵ�
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

//������룺β�巨
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

//�������
void list_sort_insert(pstu* pphead, pstu* pptail, int i)
{

}