#include<stdio.h>
main()
{
	float su;
	printf("実数を入れて:");
	scanf("%f", &su);
	printf("2倍すると%.2f\n", su * 2.0);
	printf("3倍すると%.2f\n", su * 3.0);
}