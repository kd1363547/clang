#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int  k[20], i=0, n;
	srand(time(0));
	printf("•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] += k[i];
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ%s\n", s);
	printf("ˆÃ†‰»ƒL[");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
}