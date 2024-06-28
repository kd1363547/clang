#include<stdio.h>
main()
{
	char s[20];
	int i = 0;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í");
	scanf("%s", &s);
	while (s[i]!= '\0') {
		s[i] -= 1;
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ğ%s‚ğ•\¦", s);
}