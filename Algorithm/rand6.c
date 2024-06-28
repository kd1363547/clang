#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b;
	srand(time(0));
	b = rand() % 2;
	printf("何を出しますか？\n(1:グー2:チョキ3:パー)\n");
	scanf("%d", &a);
	if (a == 1) {
		printf("プレイヤーはグーです\n");
	}
	if (a == 2) {
		printf("プレイヤーはチョキです\n");
	}
	if (a == 3) {
		printf("プレイヤーはパーです\n");
	}


	if (b == 0) {
		printf("コンピューターはグーです\n");
	}
	if (b == 1) {
		printf("コンピューターはチョキです\n");
	}
	if (b == 2) {
		printf("コンピューターはパーです\n");
	}


	if (a == 1 && b == 0) {
		printf("あいこ");
	}
	if (a == 1 && b == 1) {
		printf("プレイヤーの勝ち");
	}
	if (a == 1 && b == 2) {
		printf("コンピューターの勝ち");
	}


	if (a == 2 && b == 0) {
		printf("コンピューターの勝ち");
	}
	if (a == 2 && b == 1) {
		printf("あいこ");
	}
	if (a == 2 && b == 2) {
		printf("プレイヤーの勝ち");
	}


	if (a == 3 && b == 0) {
		printf("プレイヤーの勝ち");
	}
	if (a == 3 && b == 1) {
		printf("コンピューターの勝ち");
	}
	if (a == 3 && b == 2) {
		printf("あいこ");
	}
}