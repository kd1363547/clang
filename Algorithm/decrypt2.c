#include<stdio.h>
main()
{
	char s[21];
	int i,k[20];
	printf("文字列を入力:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]復号化キー", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("復号化済み文字列%s",s );
}