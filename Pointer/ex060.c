#include<stdio.h>
main()
{
	char data[15] = "Language";
	char a,*pdata;
	int b=0;
	pdata = data;
	printf("data[ ]=%s\n", data);
	printf("���������́H");
	scanf("%c", &a);
	printf("�������ʂ́A");
	while (*(pdata + b)) {
		if (a == *(pdata + b)) {
			printf(" %d ", b + 1);
		}
		b++;
	}
	printf("�����ڂł�");
}