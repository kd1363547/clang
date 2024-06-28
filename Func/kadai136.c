#include<stdio.h>
int dai(int a, int b);
main()
{
	int a, b;
	printf("2‚Â‚Ì®”:");
	scanf("%d%d", &a, &b);
	printf("max=%d\n", dai(a, b));
}
int dai(int a, int b)
{
	if (a >= b) {
		return  a;
	}
	else {
		return b;
	}
}