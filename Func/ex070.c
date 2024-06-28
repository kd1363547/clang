#include<stdio.h>
int add(int a,int b);/*プロトタイプ宣言*/
int hiku(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	kotae=add(a,b);
	printf("合計は%dです\t減産結果は%dです\n", kotae,hiku(a,b));

}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}
int hiku(int a, int b)
{
	return a - b;
}