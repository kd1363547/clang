#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;
	srand(time(0));
	a = rand() % 100+1;
	if (a <= 30) {
		printf("かいしんのいちげき!\n");
	}
	else {
		printf("通常攻撃\n");
	}
}