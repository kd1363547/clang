#include<stdio.h>
main()
{
	char s[20];
	int i = 0;
	printf("暗号化文字列を入力");
	scanf("%s", &s);
	while (s[i]!= '\0') {
		s[i] -= 1;
		i++;
	}
	printf("復号化文字列を%sを表示", s);
}