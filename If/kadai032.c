#include<stdio.h>
main()
{
	int a;
	printf("整数?");
	scanf("%d", &a);
	if (a % 2 == 1) {
		printf("奇数です。\n");
	}
	else {
		printf("偶数です。\n");
	}
}