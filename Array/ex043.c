#include<stdio.h>
main()
{
	char a[] = "orange";
	int b;
	b = 0;
	while (a[b]!='\0') {
		b++;
	}
	printf("������:%s\n", &a[0]);
	printf("��������%d����\n", b);
}