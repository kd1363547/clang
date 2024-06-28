#include<stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * pdata1;
	char data2[10], *pdata2;
	pdata1 = data1;
	pdata2 = data2;
	while (*pdata2++ = *pdata1++);
	pdata1 = data1;
	while (*pdata1++ = *p++);
	/*while (*pdata1) {
		*pdata2 = *pdata1;
		pdata1++;
		pdata2++;
	}
	while (*p) {
		*pdata1 = *p;
		pdata1++;
		p++;
	}
	pdata2 = '\0';*/
	printf("data1[ ]=%s\n", data1);
	printf("data2[ ]=%s\n", data2);
}