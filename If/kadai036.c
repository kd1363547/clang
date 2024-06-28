#include<stdio.h>
main()
{
	int a, b;
	printf("®”1:");
	scanf("%d", & a);
	printf("®”2:");
	scanf("%d", & b);
	if (a == b) {
		printf("%d‚Í%d‚Í“™‚µ‚¢\n", a, b);
	}
	if (a > b) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", a, b, a - b);
	}
	if (a < b) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", a, b, a - b);
	}
	
}