#include<stdio.h>
main()
{
	char s[21], k[20];
	int i;
	printf("����������:");
	scanf("%s", &s[0]);
	printf("�����L�[�����");
	scanf("%s", &k[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] =s[i]- (k[i]-'0');
	}
	printf("�������ςݕ�����%s",s );
}