#include<stdio.h>
main()
{
	int a, b;
	b = 0;
	while (1) {
		printf("数を入れて:");
		scanf("%d", &a);
		if (a ==-999) {
			break;
		}
		b += a;
	}
	printf("合計=%d\n", b);
}