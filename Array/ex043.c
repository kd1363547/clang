#include<stdio.h>
main()
{
	char a[] = "orange";
	int b;
	b = 0;
	while (a[b]!='\0') {
		b++;
	}
	printf("文字列:%s\n", &a[0]);
	printf("文字数は%d文字\n", b);
}