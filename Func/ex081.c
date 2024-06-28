#include<stdio.h>
int get_max(int *array,int m);
int get_min(int *array,int m);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },a;
	printf("Å‘å’l=%d\n", get_max(data,8));
	printf("Å¬’l=%d\n", get_min(data,8));
	
}
int get_max(int* array,int m)
{
	int max, i = 1;
	for (max = *array; i < m; i++) {
		if (max < *(array + i)) {
			max = *(array + i);
		}
	}
	return max;
}
int get_min(int* array, int m)
{
	int min, i=1;
	for (min = *array; i < m;i++) {
		if (min > *(array + i)) {
			min = *(array + i);
		}
	}
	return min;
}