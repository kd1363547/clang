#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;
	int i;
	srand(time(0));
	a = rand() % 5 + 1;
	/*if (a == 1) {
		printf("今日のあなたの運勢は、☆です\n");
	}
	if (a == 2) {
		printf("今日のあなたの運勢は、☆☆です\n");
	}
	if (a == 3) {
		printf("今日のあなたの運勢は、☆☆☆です\n");
	}
	if (a == 4) {
		printf("今日のあなたの運勢は、☆☆☆☆です\n");
	}
	if (a == 5) {
		printf("今日のあなたの運勢は、☆☆☆☆☆です\n");
	}
	*/
	printf("今日のあなたの運勢は、");
	for (i = 0; i < a; i++) {
		printf("☆");
	}
	printf("です\n");
				

}