#include<stdio.h>
main()
{
	int a;
	printf("0����100�܂ł̐���:");
	scanf("%d", &a);
	if (a >= 90) {
		printf("���茋�ʁu5�v\n");
	}
	else {
		if (a >= 80) {
			printf("���茋�ʁu4�v\n");
		}
		else {
			if (a >= 50) {
				printf("���茋�ʁu3]\n");
			}
			else {
				if (a >= 30) {
					printf("���茋�ʁu2�v\n");
				}
				else("���茋�ʁu1�v\n");
			}
		}
	}
}