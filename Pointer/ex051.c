#include<stdio.h>
main()
{
	int a, b, c;
	int* p, * q;
	a = 50;
	b = 10;
	p = &a;
	q = &b;
	c = *p + *q;
	printf("%d+%d=%d\n",a, b, c);
}