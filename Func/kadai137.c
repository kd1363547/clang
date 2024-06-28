#include<stdio.h>
char moji(char a);
main()
{
	char a;
	printf("アルファベット1文字:");
	scanf("%c", &a);
	if (moji(a) == 0) {
		printf("小文字\n");
	}
	else {
		printf("大文字\n");
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
