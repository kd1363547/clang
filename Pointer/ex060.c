#include<stdio.h>
main()
{
	char data[15] = "Language";
	char a,*pdata;
	int b=0;
	pdata = data;
	printf("data[ ]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &a);
	printf("検索結果は、");
	while (*(pdata + b)) {
		if (a == *(pdata + b)) {
			printf(" %d ", b + 1);
		}
		b++;
	}
	printf("文字目です");
}