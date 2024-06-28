#include<stdio.h>
main()
{
	float box[3], a=0;
	int b;
	for (b = 0; b < 3;b++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[b]);
		a += box[b];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n", a, a / 3);
}