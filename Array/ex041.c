#include<stdio.h>
main()
{
	float box[3], a=0;
	int b;
	for (b = 0; b < 3;b++) {
		printf("実数を入力:");
		scanf("%f", &box[b]);
		a += box[b];
	}
	printf("合計は%.2fです\n平均は%.2fです\n", a, a / 3);
}