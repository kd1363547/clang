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
	printf("���i��:%s\n", a.name);
	printf("���i:%d�~\n", a.price);
	printf("�������ߓx:");
	for (int i = 0; i < a.point; i++) {
		printf("��");
	}
	printf("\n��:%d\n", a.number);
	printf("���z:\\%d\n", a.total);

}