#include<stdio.h>
main(int atgc, char* argv[])
{
	int data1, data2, answer;

	data1 = atoi(argv[1]);
	data2 = atoi(argv[2]);
	answer = data1 + data2;

	printf("%d+%d=%d\n", data1, data2, answer);
}