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
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", a.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &a.birth[0],&a.birth[1],&a.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", a.blood);
	printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%s\n", a.name, a.birth[0], a.birth[1], a.birth[2], a.blood);
}