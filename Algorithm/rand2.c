#include<stdio.h>
#include<stdlib.h>  //�������g���Ƃ��ɕK�v
#include<time.h>    //�������g���Ƃ��ɕK�v
main()
{
	int dice;
	srand(time(0));  //������������(�V���b�t��)����
	dice = rand() % 6 + 1;
	printf("�T�C�R����%d�ł�\n", dice);

	
}