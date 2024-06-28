#include<stdio.h>
main()
{
	char data[]="Apple";
	int a;
	a = 0;
	printf("1•¶Žš‚ð‚¸‚Â•\Ž¦\n");
	while (data[a]!='\0'){
		printf("%c", data[a]);
		a++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &data[0]);
}