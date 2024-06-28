#include<stdio.h>
main()
{
	char a;
	printf("1文字入力:");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z'|| a >= 'a' && a <= 'z') {
			printf("アルファベット");
	}
	else {
		printf("その他の文字です");
	}

	
}