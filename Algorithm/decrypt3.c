#include<stdio.h>
main()
{
	char s[21], k[20];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	printf("•œ†ƒL[‚ğ“ü—Í");
	scanf("%s", &k[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] =s[i]- (k[i]-'0');
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ%s",s );
}