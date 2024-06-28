#include<stdio.h>
main()
{
	int a = 100, b = 200,c;
	int *p, *q;
	printf("実行前：a=%d	b=%d\n", a, b);
	p = &a;
	q = &b;
	//入れ替え処理（ポインタを使用）
	c = *p; //*がついていたらかくのうされているアドレス先の中身
	*p = *q;
	*q = c;
	printf("実行後：a=%d	b=%d\n",a,b);
}