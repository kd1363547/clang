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
		printf("���i��:\t%s\n", (p + i)->name);
		printf("���i:\t%d�~\t", (p + i)->price);
		printf("�������ߓx:\t");
		for (int j = 0; j < a[i].point; j++) {
			printf("��");
		}
		printf("\n��:\t%d\t", (p + i)->number);
		printf("���z:\\%d\n\n", (p + i)->total);
	}
	printf("���v���z=\\%d-\n", total);

}