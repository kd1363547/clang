#include<stdio.h>
main()
{
	float box[3], a=0;
	int b;
	for (b = 0; b < 3;b++) {
		printf("���������:");
		scanf("%f", &box[b]);
		a += box[b];
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�\n", a, a / 3);
}