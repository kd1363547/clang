#include<stdio.h>
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	printf("‡Œv‚Í%d\t•½‹Ï%.2f\n", gokei(a, b, c), heikin(a, b, c));
}
int gokei(int a, int b, int c)
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (float)gokei(a,b,c) / 3;
}