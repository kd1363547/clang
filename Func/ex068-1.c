#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("���l��3����:\n");
	ret = scanf("%d%d%d", &a, &b, &c );
	printf("ret:%d\ta:%d\tb:%d\tc:%d\n", ret, a, b, c );

	printf("���l��1����(Ctrl+Z�ŏI��):");
	 while(scanf("%d",&a)!=EOF){
		;
		printf("���l:%d\n",a);
		printf("���l��1����(Ctrl+Z�ŏI��):");
	}
}