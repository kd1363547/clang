#include<stdio.h>
main()
{
	int j ,h, b;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &b);
	if (b <= 5000 ) {
		j = b / 3600;
		b = b % 3600;
		h = b / 60;
		b = b % 60;


		printf("%dŠÔ%d•ª%d•b\n",j,h,b);
	}
	else {
		printf("ƒGƒ‰[");
	}
}