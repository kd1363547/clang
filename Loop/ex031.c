#include<stdio.h>
main()
{
	int a,b;
	a = 0;
	for (b = 1; b <= 10; b++) {
		a += b;
		printf("1����%d�܂ł̘a=%d\n", b,a);
	}
}