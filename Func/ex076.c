#include<stdio.h>
void get_sumarg(int x, int y, int* sum, int* avg);
main()
{
	int a,b, c, d;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	get_sumarg(a, b, &c, &d);
	printf("���v�� %d�A���ς� %.2f�ł��B\n", c, (float)d);
}
void get_sumarg(int x, int y, int* sum, int* avg)
{
	*sum = x + y;
	*avg = *sum / 2;
}