#include<stdio.h>
main()
{
	int a[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* pa, i,b;
	pa = a[0];
	
	for (i = 0; i < 3; i++) {
		for (b = 0; b < 3; b++) {
			printf(" %d ", *pa++);
		}
		printf("\n");
	}
}