#include "func.h"

int main()
{
	pstu phead=NULL, ptail=NULL;//���������ͷβָ�룬����һ������
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		list_head_insert(&phead,&ptail,i);
	}
	print_list(phead);
	system("pause");
}
