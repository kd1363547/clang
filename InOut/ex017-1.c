#include<stdio.h>
main()
{
	float su1, su2, su3,goukei,heikin;
	printf("1�ڂ̎���:");
	scanf("%f", &su1);
	printf("2�ڂ̎���:");
	scanf("%f", &su2);
	printf("3�ڂ̎���:");
	scanf("%f", &su3);
	goukei = su1 + su2 + su3;
	printf("���v=%f�ł�\n", goukei);
	heikin = su1 + su2 + su3 / 3;
	printf("����=%f�ł�\n", heikin);
}