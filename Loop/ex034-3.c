#include<stdio.h>
main()
{
	int a,b,save;
	printf("”‚Í:");
	scanf("%d", &a);
	save = a + 1;
	
	do {
		b = 0;
		do {
			printf("*");
			b++;
		} while (b<save-a);
		printf("\n");
		a--;

	} while (a > 0);
}