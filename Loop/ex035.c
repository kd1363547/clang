#include<stdio.h>
main()
{
	int a, b;
	b = 0;
	while (1) {
		printf("��������:");
		scanf("%d", &a);
		if (a ==-999) {
			break;
		}
		b += a;
	}
	printf("���v=%d\n", b);
}