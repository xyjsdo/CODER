#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	int letter = 0, digit = 0, others = 0;
	while (c = getchar(), c != '\n')
	{
		if (c <= 57 && c >= 48)
		{
			digit++;
		}
		else if(c>64&&c<91||c>96&&c<123) {
			letter++;
		}
		else
		{
			others++;
		}
	}
	printf("%3d\n", letter);
	
	printf("alp=%d,num=%d,oth=%d\n", letter, digit, others);
	system("pause");
}