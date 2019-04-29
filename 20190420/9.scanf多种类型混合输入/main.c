#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float f;
	char c;
	int ret;
	ret = scanf("%d%f %c", &i, &f, &c);
	printf("%d %f %c over\n", i, f, c);
	system("pause");
}