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
	if (a == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (a == 2) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (a == 3) {
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


	if (a == 1 && b == 0) {
		printf("������");
	}
	if (a == 1 && b == 1) {
		printf("�v���C���[�̏���");
	}
	if (a == 1 && b == 2) {
		printf("�R���s���[�^�[�̏���");
	}


	if (a == 2 && b == 0) {
		printf("�R���s���[�^�[�̏���");
	}
	if (a == 2 && b == 1) {
		printf("������");
	}
	if (a == 2 && b == 2) {
		printf("�v���C���[�̏���");
	}


	if (a == 3 && b == 0) {
		printf("�v���C���[�̏���");
	}
	if (a == 3 && b == 1) {
		printf("�R���s���[�^�[�̏���");
	}
	if (a == 3 && b == 2) {
		printf("������");
	}
}