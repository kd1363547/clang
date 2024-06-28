#include<stdio.h>
main()
{
	char a[50], b[50], c[50];
	int d = 0;
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &a[0]);
	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &b[0]);
	while (a[d] != '\0') {
		c[d] = a[d];
		d++;
	}
	c[d] = '\0';
	while (b[d] != '\0') {
		a[d] = b[d];
		d++;
	}
	a[d] = '\0';
	while (c[d] != '\0') {
		b[d] = c[d];
		d++;
	}
	b[d] = '\0';
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("•¶Žš1=%s   •¶Žš2=%s\n",&a[0], &b[0]);
}


