#include<stdio.h>
main()
{
	float x[3][2],sum;
	int a,b;
	for (a = 0; a < 3; a++) {
		for (sum=0, b = 0; b <2; b ++) {
			printf("x[%d][%d]=", a, b);
			scanf("%f", &x[a][b]);
			sum += x[a][b];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", a, sum/2);
	}
}