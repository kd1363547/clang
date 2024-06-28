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
	struct fruit* p;
	p = a;
	int total = 0;
	for (int i = 0; i < 3; i++) {
		(p+i)->total = (p+i)->price * (p+i)->.number;
		total += (p+i)->total;
		printf("è§ïiñº:\t%s\n", (p + i)->name);
		printf("âøäi:\t%dâ~\t", (p + i)->price);
		printf("Ç®Ç∑Ç∑Çﬂìx:\t");
		for (int j = 0; j < a[i].point; j++) {
			printf("Åö");
		}
		printf("\nå¬êî:\t%d\t", (p + i)->number);
		printf("ã‡äz:\\%d\n\n", (p + i)->total);
	}
	printf("çáåvã‡äz=\\%d-\n", total);

}