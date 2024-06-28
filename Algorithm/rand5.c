#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;
	srand(time(0));
	for (i = 0; i <= 100; i++) {
	a = rand() % 300 + 1;
	printf("%d \t", a);
	}
}