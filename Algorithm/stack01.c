#include<stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);
main()
{
	int key, data, result;
	do {
		printf("\n\n◆プッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\nスタックがいっぱいです");

			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\nスタックが空です\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}
void display(void)
{
	int i;
	printf("\n現在のスタック内容");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]ha%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示しているところ(現在spは%d)", sp);
		}
		printf("\n");
	}
	return;
}
int push(int d)
{
	if (sp == STACKSIZE) { return -1; }
	stack[sp] = d;
	sp++;
	return 0;
}
int pop(int* pd)
{
	if (sp == 0) { return -1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}