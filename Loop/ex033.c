#include<stdio.h>
main()
{
	int a,b,c;
	a = 0;
	b = 0;
	printf("数は？:");
	scanf("%d", &c);
	for (; c != -999;) {
		b += c;
		a++;
		printf("数は？:");
		scanf("%d", &c);
	}
	if (a != 0) {
		printf("合計=%d\n　平均=%.2f", b, (float)b / a);
	}
}