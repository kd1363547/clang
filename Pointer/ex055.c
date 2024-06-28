#include<stdio.h>
#define B_SIZE 4
main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa, qa, i;
	float* pb, qb;
	for (qa = 0, pa = a, i=0; i < sizeof a / sizeof(int); i++, pa++) {
		qa += *pa;
	}
	printf("配列a 合計=%7d\t平均=%6.3f\n", qa, (float)qa / (sizeof a / sizeof(int)));
	for (qb = 0, pb = b, i = 0; i < B_SIZE; i++, pb++) {
		qb += *pb;
	}
	printf("配列b 合計=%7.3f\t平均=%6.3f\n", qb, qb / B_SIZE);

}