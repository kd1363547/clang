#include<stdio.h>
int add(int a,int b);/*�v���g�^�C�v�錾*/
int hiku(int a, int b);
main()
{
	int a, b, kotae;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	kotae=add(a,b);
	printf("���v��%d�ł�\t���Y���ʂ�%d�ł�\n", kotae,hiku(a,b));

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