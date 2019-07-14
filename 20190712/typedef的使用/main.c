#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	int num;
	char name[20];
	char sex;
}stu,*pstu;// stu是一个类型别名，*pstu也是类型别名（结构体指针）

int main()
{
	stu s = { 1001,"lele",'M' };
	pstu p;
	p = &s;
	printf("%d %s %c", p->num, p->name, p->sex);
}