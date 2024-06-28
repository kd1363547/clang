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
	a -= 1;
	if (a == 0) {
		printf("プレイヤーはグーです\n");
	}
	if (a == 1) {
		printf("プレイヤーはチョキです\n");
	}
	if (a == 2) {
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
	if (a == b) {
		printf("あいこ");
	}
	if ((a+1)%3==b) {
		printf("プレイヤーの勝ち");
	}
	if ((b+1)%3==a) {
		printf("コンピューターの勝ち");
	}
}