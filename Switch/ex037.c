#include<stdio.h>
main()
{
	char a;
	printf("演算子を入れて:");
	scanf("%c", &a);
	switch (a) {
	case  '+':
		printf("加算です\n");
		break;
	case '-':
		printf("減算です\n");
		break;
	case '*':
		printf("乗算です\n");
		break;
	case '/':
		printf("除算です\n");
		break;
	case '%':
		printf("あまりです\n");
		break;
	default :
		printf("その他です\n");

	}
}