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
	struct fruit a = { "peach",300,5,3,0 };
	a.total = a.price * a.number;
	printf("è§ïiñº:%s\n", a.name);
	printf("âøäi:%dâ~\n", a.price);
	printf("Ç®Ç∑Ç∑Çﬂìx:");
	for (int i = 0; i < a.point; i++) {
		printf("Åö");
	}
	printf("\nå¬êî:%d\n", a.number);
	printf("ã‡äz:\\%d\n", a.total);

}