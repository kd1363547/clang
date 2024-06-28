#include<stdio.h>
main()
{
	int a, b;
	b = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &a);
		if (a ==-999) {
			break;
		}
		b += a;
	}
	printf("‡Œv=%d\n", b);
}