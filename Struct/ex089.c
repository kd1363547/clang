#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile a;
	printf("���O�����:");
	scanf("%s", a.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &a.birth[0],&a.birth[1],&a.birth[2]);
	printf("���t�^�����:");
	scanf("%s", a.blood);
	printf("%s--%d�N%d��%d���� ���t�^-%s\n", a.name, a.birth[0], a.birth[1], a.birth[2], a.blood);
}