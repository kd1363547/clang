#include<stdio.h>
main()
{
	int a,i=0, sum = 0;
	printf("®”‚ğ“ü—Í:");
	while (scanf("%d", &a) != EOF) {
		sum += a;
		i++;
		printf("®”‚ğ“ü—Í:");
	}
	printf("‡Œv=%d\t•½‹Ï=%.2f\n", sum,(float)sum/i );
}