#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int  k[20], i=0, n;
	srand(time(0));
	printf("文字列を入力:");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] += k[i];
		i++;
	}
	printf("暗号化文字列%s\n", s);
	printf("暗号化キー");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}