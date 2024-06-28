#include<stdio.h>
main()
{
	char* pride[3] = { "car","bus","shinkansen" }, * p;
	int i;
	for (i = 0; i < 3; i++) {
		p = pride[i];
		/*printf("%s\n", pride[i]);*/
		while (*p) {
			printf("%c\n", *p);
			p++;
		}
		printf("\n");
	}
}