#include<stdio.h>
main()
{
	int a,b;
	a = 0;
	for (b = 1; b <= 10; b++) {
		a += b;
		printf("1から%dまでの和=%d\n", b,a);
	}
}