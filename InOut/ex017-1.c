#include<stdio.h>
main()
{
	float su1, su2, su3,goukei,heikin;
	printf("1‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su1);
	printf("2‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su2);
	printf("3‚Â–Ú‚ÌÀ”:");
	scanf("%f", &su3);
	goukei = su1 + su2 + su3;
	printf("‡Œv=%f‚Å‚·\n", goukei);
	heikin = su1 + su2 + su3 / 3;
	printf("•½‹Ï=%f‚Å‚·\n", heikin);
}