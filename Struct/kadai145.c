#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit a[] = { {"peach",300,5,3,0},
						{"grape",200,4,10,0},
						{"watermelon",1500,5,8,0} };
	int total = 0;
	for (int i = 0; i < 3; i++) {
		a[i].total = a[i].price * a[i].number;
		total += a[i].total;
		printf("¤•i–¼:\t%s\n", a[i].name);
		printf("‰¿Ši:\t%d‰~\t", a[i].price);
		printf("‚¨‚·‚·‚ß“x:\t");
		for (int j = 0; j < a[i].point; j++) {
			printf("š");
		}
		printf("\nŒÂ”:\t%d\t", a[i].number);
		printf("‹àŠz:\\%d\n\n", a[i].total);
	}
	printf("‡Œv‹àŠz=\\%d-\n", total);

}