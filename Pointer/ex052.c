#include<stdio.h>
main()
{
	int a = 100, b = 200,c;
	int *p, *q;
	printf("���s�O�Fa=%d	b=%d\n", a, b);
	p = &a;
	q = &b;
	//����ւ������i�|�C���^���g�p�j
	c = *p; //*�����Ă����炩���̂�����Ă���A�h���X��̒��g
	*p = *q;
	*q = c;
	printf("���s��Fa=%d	b=%d\n",a,b);
}