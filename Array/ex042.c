#include<stdio.h>
main()
{
	char data[]="Apple";
	int a;
	a = 0;
	printf("1���������\��\n");
	while (data[a]!='\0'){
		printf("%c", data[a]);
		a++;
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &data[0]);
}