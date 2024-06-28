#include<stdio.h>
#include<stdlib.h>  //乱数を使うときに必要
#include<time.h>    //乱数を使うときに必要
main()
{
	int dice;
	srand(time(0));  //乱数を初期化(シャッフル)する
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);

	
}