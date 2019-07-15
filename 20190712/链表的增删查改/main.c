#include "func.h"

int main()
{
	pstu phead=NULL, ptail=NULL;//声明链表的头尾指针，定义一个链表
	int i;
	while (scanf("%d",&i)!=EOF)
	{
		list_head_insert(&phead,&ptail,i);
	}
	print_list(phead);
	system("pause");
}
