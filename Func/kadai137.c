#include<stdio.h>
char moji(char a);
main()
{
	char a;
	printf("�A���t�@�x�b�g1����:");
	scanf("%c", &a);
	if (moji(a) == 0) {
		printf("������\n");
	}
	else {
		printf("�啶��\n");
	}
}
char moji(char a)
{
	if (a >= 0x61 && a <= 0x7a) {
		return 0;
	}
	else {
		return(1);
	}
}
