#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b;
	srand(time(0));
	b = rand() % 2;
	printf("�����o���܂����H\n(1:�O�[2:�`���L3:�p�[)\n");
	scanf("%d", &a);
	a -= 1;
	if (a == 0) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (a == 1) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (a == 2) {
		printf("�v���C���[�̓p�[�ł�\n");
	}


	if (b == 0) {
		printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	if (b == 1) {
		printf("�R���s���[�^�[�̓`���L�ł�\n");
	}
	if (b == 2) {
		printf("�R���s���[�^�[�̓p�[�ł�\n");
	}
	if (a == b) {
		printf("������");
	}
	if ((a+1)%3==b) {
		printf("�v���C���[�̏���");
	}
	if ((b+1)%3==a) {
		printf("�R���s���[�^�[�̏���");
	}
}