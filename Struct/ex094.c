#include<stdio.h>
#include<string.h>
#define N 2
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile a[N];
	struct profile * p;
	int i;
	for (p = a, i = 0; i < N; i++, p++) {
		printf("%d�l��(���O):",i+1);
		scanf("%s",p->name);
		printf("%d�l��(���N����):",i+1);
		scanf("%d%d%d",&p->birth[0],&p->birth[1],&p->birth[2]);
		printf("%d�l��(���t�^):",i+1);
		scanf("%s", p->blood);
	}
	for (p = a, i = 0; i < N; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf(" % s-- % d�N % d�� % d���� ���t�^ - % s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}