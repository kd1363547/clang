#include<stdio.h>
main()
{
	int a,b,su;
	printf("”‚Í:");
	scanf("%d", &su);
	
	a = 1;
	do {
		b = 0;
		do {
			printf(" ");
			; b++;
		} while (b<=su - a);
		b = 0;
		do {
			printf("*");
			b++;
		} while (b<a);
		printf("\n");
		a++;

	} while (a <= su);
}