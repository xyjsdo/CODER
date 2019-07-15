#include "func.h"

int main()
{
	pstu phead = NULL, ptail = NULL;
	int i;
	
	while (scanf_s("%d", &i) != EOF) {
		
		//list_head_insert(&phead, &ptail, i);
		list_tail_insert(&phead, &ptail, i);
	}
	print_list(phead);
	system("pause");
}