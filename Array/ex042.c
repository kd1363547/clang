#include<stdio.h>
main()
{
	char data[]="Apple";
	int a;
	a = 0;
	printf("1文字をずつ表示\n");
	while (data[a]!='\0'){
		printf("%c", data[a]);
		a++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &data[0]);
}