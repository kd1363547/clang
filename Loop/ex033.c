#include<stdio.h>
main()
{
	int a,b,c;
	a = 0;
	b = 0;
	printf("���́H:");
	scanf("%d", &c);
	for (; c != -999;) {
		b += c;
		a++;
		printf("���́H:");
		scanf("%d", &c);
	}
	if (a != 0) {
		printf("���v=%d\n�@����=%.2f", b, (float)b / a);
	}
}