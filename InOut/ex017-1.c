#include<stdio.h>
main()
{
	float su1, su2, su3,goukei,heikin;
	printf("1つ目の実数:");
	scanf("%f", &su1);
	printf("2つ目の実数:");
	scanf("%f", &su2);
	printf("3つ目の実数:");
	scanf("%f", &su3);
	goukei = su1 + su2 + su3;
	printf("合計=%fです\n", goukei);
	heikin = su1 + su2 + su3 / 3;
	printf("平均=%fです\n", heikin);
}