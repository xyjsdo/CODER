#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
	int num;
	char name[20];
	char sex;
}stu,*pstu;// stu��һ�����ͱ�����*pstuҲ�����ͱ������ṹ��ָ�룩

int main()
{
	stu s = { 1001,"lele",'M' };
	pstu p;
	p = &s;
	printf("%d %s %c", p->num, p->name, p->sex);
}