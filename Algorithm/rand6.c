#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	printf("�����o���܂����H\n");
	printf("�i1:�O�[ �Q�F�`���L 3:�p�[)");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł�\n");
	}
	if (pl == 2) {
		printf("�v���C���[�̓`���L�ł�\n");
	}
	if (pl == 3) {
		printf("�v���C���[�̓p�[�ł�\n");
	}
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 1) {
		printf("�R���s���[�^�[�̓O�[�ł�\n");
	}
	if (cpu == 2) {
		printf("�R���s���[�^�[�̓`���L�ł�\n");
	}
	if (cpu == 3) {
		printf("�R���s���[�^�[�̓p�[�ł�\n");
	}
	//�v���C���[�����p�^�[��
	if((pl==1&&cpu==1)
		|| (pl == 2 && cpu == 2) 
		|| (pl == 3 && cpu == 0)){
		printf("�v���C���[�̕����ł�\n");
    }
	//�������p�^�[��
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("�������ł�\n");
	}
	//�v���C���[�����p�^�[��
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("�v���C���[�̏����ł�\n");
	}
}