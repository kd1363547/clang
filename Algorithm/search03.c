#include<stdio.h>
main()
{
	int d[11] = { 10,15,28,23,28,35,47,55,68,78,96 };
	int s,low, mid, high;
	printf("’Tõ’ns‚ğ“ü—Í");
	scanf("%d", & s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s==d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("’Tõ’n%d‚ğd[%d]‚Å”­Œ©\n", s, mid);
	}
	
}