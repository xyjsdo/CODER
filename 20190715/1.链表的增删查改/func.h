#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	int num;
	struct student* pnext;
}stu, *pstu;

void list_head_insert(pstu*, pstu*, int);
void print_list(pstu*);
void list_tail_insert(pstu*, pstu*, int);
void list_sort_insert(pstu*, pstu*, int);