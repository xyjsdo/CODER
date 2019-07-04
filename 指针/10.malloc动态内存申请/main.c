#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main()
{
	int i;
	char *p;
	scanf("%d", &i);
	p = (char*)malloc(i);
	strcpy(p, "hello");
	puts(p);
	free(p);
	system("pause");
}