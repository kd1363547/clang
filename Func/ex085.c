#include<stdio.h>
void link(char* p1, char* p2);
main()
{
	char a[200];
	char b[200];
	printf("”z—ñ a:");
	scanf("%s", a);
	printf("”z—ñ b:");
	scanf("%s", b);
	link(a, b);
	printf("”z—ñ a:%s", a);
}
void link(char* p1, char* p2)
{
	/*int i, j;
	for (i = 0; *(p1 + i) != '\0'; i++);
	for (j = 0; *(p1 + i) = *(p2 + j); i++, j++);*/
	for (; *p1 != '\0'; p1++);
	while (*p2!='\0') {
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	return;
}