#include<stdio.h>
main()
{
	float a, b;
	printf("2つの実数値?");
	scanf("%f%f", &a, &b);
	if (a < b) {
		printf("大きいほうは=%fです\n", b);
	}
	else {
		printf("大きいほうは=%fです\n", a);
	}
}