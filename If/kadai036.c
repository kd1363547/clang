#include<stdio.h>
main()
{
	int a, b;
	printf("整数1:");
	scanf("%d", & a);
	printf("整数2:");
	scanf("%d", & b);
	if (a == b) {
		printf("%dは%dは等しい\n", a, b);
	}
	if (a > b) {
		printf("%dの方が%dより%d大きい\n", a, b, a - b);
	}
	if (a < b) {
		printf("%dの方が%dより%d小さい\n", a, b, a - b);
	}
	
}