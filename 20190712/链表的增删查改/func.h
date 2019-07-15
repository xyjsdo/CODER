#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct student {
	int num;
	struct student* pnext;
}stu, *pstu;

void list_head_insert(pstu*, pstu*, int);
void print_list(pstu);