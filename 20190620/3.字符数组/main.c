#include <stdio.h>
#include <stdlib.h>
void print(char c[])
{
	int i = 0;
	while (c[i] != 0)
	{
		printf("%c", c[i]);
		i++;
	}
	printf("\n");
}

void print2(char c[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%c", c[i]);
	}
}
int main()
{
	char c[10]="123456789";
	//print2(c);
	printf("%s\n", c);
	system("pause");
}