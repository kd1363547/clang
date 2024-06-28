#include<stdio.h>
main()
{
	int a[][3] = { {10,20,30},{40,50,60},{70,80,90 }};
	int* pa, i,b;
	pa = a[0];
	
	for (i = 0; i < (3*3); i++) {
		if (i % 3 == 1) {
			printf(" %d ", *pa);
		}
		pa++;
	}
	/*•Ê‰ð
	 pa=&a[0][1];
	 for(i=0;i<3;i++){
		printf(" %d ",*pa);
		a+=3;
	*/
}