#include<stdio.h>
main()
{
	char a[50], b[50], c[50];
	int d = 0;
	printf("文字列1を入力:");
	scanf("%s", &a[0]);
	printf("文字列2を入力:");
	scanf("%s", &b[0]);
	while (a[d] != '\0') {
		c[d] = a[d];
		d++;
	}
	c[d] = '\0';
	while (b[d] != '\0') {
		a[d] = b[d];
		d++;
	}
	a[d] = '\0';
	while (c[d] != '\0') {
		b[d] = c[d];
		d++;
	}
	b[d] = '\0';
	printf("入れ替えると\n");
	printf("文字1=%s   文字2=%s\n",&a[0], &b[0]);
}


