#include<stdio.h>
void get_sumarg(int x, int y, int* sum, int* avg);
main()
{
	int a,b, c, d;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	get_sumarg(a, b, &c, &d);
	printf("合計は %d、平均は %.2fです。\n", c, (float)d);
}
void get_sumarg(int x, int y, int* sum, int* avg)
{
	*sum = x + y;
	*avg = *sum / 2;
}