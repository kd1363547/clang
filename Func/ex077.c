#include<stdio.h>
void get_maxmin(int d1, int d2, int d3, int *max, int *min);
main()
{
	int a, b, c, d, e;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	get_maxmin(a,b,c,&d, &e);
	printf("�ő�l=%d �ŏ��l%d\n", d, e);
}
void get_maxmin(int d1, int d2, int d3, int* max, int* min)
{
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}