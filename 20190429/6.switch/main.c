#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year, mon;
	while (scanf("%d", &mon) != EOF)
	{
		switch (mon)
		{
		case 2:printf("%d is 28 days\n", mon); break;
		case 1:printf("%d is 31 days\n", mon); break;
		case 5:printf("%d is 31 days\n", mon); break;
		case 3:printf("%d is 31 days\n", mon); break;

		case 7:printf("%d is 31 days\n", mon); break;
		case 8:printf("%d is 31 days\n", mon); break;
		case 10:printf("%d is 31 days\n", mon); break;
		case 12:printf("%d is 31 days\n", mon); break;
		case 6:printf("%d is 30 days\n", mon); break;
		case 4:printf("%d is 30 days\n", mon); break;
		case 9:printf("%d is 30 days\n", mon); break;

		case 11:printf("%d is 30 days\n", mon); break;


		default:
			printf("error mon");
			break;
		}
	}
	system("pause");
}