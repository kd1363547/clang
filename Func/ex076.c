#include<stdio.h>
void get_sumarg(int x, int y, int* sum, int* avg);
main()
{
	int a,b, c, d;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	get_sumarg(a, b, &c, &d);
	printf("‡Œv‚Í %dA•½‹Ï‚Í %.2f‚Å‚·B\n", c, (float)d);
}
void get_sumarg(int x, int y, int* sum, int* avg)
{
	*sum = x + y;
	*avg = *sum / 2;
}