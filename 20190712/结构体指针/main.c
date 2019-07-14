#include <stdio.h>
#include <stdlib.h>
struct student
{
	int num;
	char name[20];
	char sex;
};

int main()
{
	struct student s = { 1001,"lilei",'M' };
	struct student* p;
	p = &s;
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);
	printf("%d %s %c\n", p->num, p->name, p->sex);

}