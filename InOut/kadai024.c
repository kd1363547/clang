#include<stdio.h>
main()
{
	int a, b;
	printf("2�̐���?");
	scanf("%d %d", &a, &b);
	printf("***%d��%d�̎l�����Z***\n",a,b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d���܂�%d\n", a, b, a / b,a%b);
}