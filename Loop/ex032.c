#include<stdio.h>
main()
{
	int a,b;
	printf("整数を入れて:");
	scanf("%d", &a);
	for (b = 1; b <= 5;b++) {
		printf("%d\n", a*b);
	}
}