#include<stdio.h>
main()
{
	float a, b;
	printf("2�̐���?");
	scanf("%f%f", &a, &b);
	printf("***%.1f��%.1f�̎l�����Z\n", a, b);
	printf("�a=%f ��=%f ��=%f ��=%f\n", a + b, a - b, a * b, a / b);
}