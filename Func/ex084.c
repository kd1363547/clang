#include<stdio.h>
void str(char* p1, char* p2);
main()
{
	char moji1[300], moji2[300];
	printf("•¶Žš—ñH:");
	gets(moji1);
	str (moji1,moji2);

	printf("str1:%s\nstr2:%s\n", moji1, moji2);
}
void str(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + i) != '\0'; i++);
	for (i--, j = 0; i >= 0; i--, j++) {
		*(p2 + j) = *(p1 + i);
	}
	*(p2 + j) = '\0';
	
	
}