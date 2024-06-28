#include<stdio.h>
main()
{
	int j ,h, b;
	printf("•b”‚ð“ü—Í:");
	scanf("%d", &b);
	if (b > 0) {
		if (b <= 5000) {

			j = b / 3600;
			b = b % 3600;
			h = b / 60;
			b = b % 60;


			printf("%dŽžŠÔ%d•ª%d•b\n", j, h, b);
		}
		else {
			printf("“ü—Í‚Í5000‚Ü‚Å");
		}
	}
	
		
	else {
		printf("ƒGƒ‰[");
	}
}