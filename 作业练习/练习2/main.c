#include <stdio.h>
#include <stdlib.h>
//��ӡͼ��
int main()
{
	int i, j;
	for (i = 0; i < 9; i++) {

		for (j = 0; j < abs(4 - i); j++) {
			printf(" ");
		}

		for (j = 0; j < 9-2*abs(4-i); j++) {
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