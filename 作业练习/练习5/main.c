#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,10}, b[10] = {5,6,7,8,9,10,14,33,44,66}, c[10];
	int i = 0, j = 0, k = 0;
	while (i<=9&&k<=9) {
		if (a[i] == b[k]) {
			c[j] = a[i];
			i++;
			j++;
			k++;
		}
		else {
			if (a[i] > b[k]) {
				k++;
			}
			else {
				i++;
			}
		}
	}

	printf("%d\n", sizeof(a));
	system("pause");
}