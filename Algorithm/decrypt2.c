#include<stdio.h>
main()
{
	char s[21];
	int i,k[20];
	printf("����������:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�������L�[", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("�������ςݕ�����%s",s );
}