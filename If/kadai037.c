#include<stdio.h>
main()
{
	int a;
	printf("0から100までの整数:");
	scanf("%d", &a);
	if (a >= 90) {
		printf("判定結果「5」\n");
	}
	else {
		if (a >= 80) {
			printf("判定結果「4」\n");
		}
		else {
			if (a >= 50) {
				printf("判定結果「3]\n");
			}
			else {
				if (a >= 30) {
					printf("判定結果「2」\n");
				}
				else("判定結果「1」\n");
			}
		}
	}
}