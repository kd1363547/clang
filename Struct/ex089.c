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
	printf("名前を入力:");
	scanf("%s", a.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &a.birth[0],&a.birth[1],&a.birth[2]);
	printf("血液型を入力:");
	scanf("%s", a.blood);
	printf("%s--%d年%d月%d日生 血液型-%s\n", a.name, a.birth[0], a.birth[1], a.birth[2], a.blood);
}