#include<stdio.h>
main()
{
	int a;
	printf("����:");
	scanf("%d", &a);
	do {
		printf("*****\n");
		a--;
	} while (a >0);
}