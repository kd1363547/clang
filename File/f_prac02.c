#include<stdio.h>
main()
{
	int max_score;
	int score = 0;
	char ch,max_name[20], name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("�ō����_�@���O:%s �n�C�X�R�A:%d\n", max_name, max_score);
	}
	else {
		printf("�t�@�C�����ǂݎ��܂���I\n");
	}
	printf("�v���C���[�������:");
	scanf("%s", name);
	while (1) {   //��������for(;;){}
		printf("���݂̃X�R�A:%d ('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (max_score < score) {
		if (fp = fopen("score.txt", "r")) {
			fp = fopen("score.txt", "w");
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V�I\n");
		}
		else {
			printf("�t�@�C���ɏ������߂܂���I\n");
			return;
		}
	}
}