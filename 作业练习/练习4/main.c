#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 0; i < 19; i++) {
		
		for (j = 0; j < abs(9 - i); j++) {
			printf(" ");
		}

		for (j = 0; j < 19 - 2 * abs(9 - i); j++) {
			if (j % 2 == 0) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}
}