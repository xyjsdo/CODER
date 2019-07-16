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
		while (pcur) {//�м����
			if (i < pcur->num)
			{
				ppre->pnext = pnew;
				pnew->pnext = pcur;
				break;
			}
			ppre = pcur;
			pcur = pcur->pnext;
		}	
		if (NULL == pcur)//��Ϊû�в��뵽�м䣬β�巨
		{
			ppre->pnext = pnew;
			*pptail = pnew;
		}
	}
}

//�������2
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
	else if(i<pcur->num)//���뵽ͷ��
	{
		pnew->pnext = *pphead;
		*pphead = pnew;
	}
	else {
		while (pcur->pnext)//���뵽�м�
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