#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		a = rand() % 100 + 1;
		if (a < 3) {
			printf("スーパーレア☆☆☆☆☆\t");
		}
		else {
			printf("レア☆☆☆\t");
		}
	}
}