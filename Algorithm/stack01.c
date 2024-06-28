#include<stdio.h>

#define STACKSIZE 8     //�X�^�b�N�T�C�Y
int stack[STACKSIZE];   //�X�^�b�N�̈�p�z��
int sp = 0;             //�X�^�b�N�|�C���^(�z��̓Y�����p)

//�֐��v���g�^�C�v�錾
void display(void);
int push(int d);
int pop(int* pd);

//���C���֐�
main()
{
	int key, date, result;
	do {
		printf("\n\n?�v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");

		//�v�b�V������
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &date);
			result = push(date);
			if (result == -1) {
				printf("\n�X�^�b�N����t�ł�\n");
			}
			else {
				display();
			}
		}

		//�|�b�v����
		if (key == 'o') {
			result = pop(&date);
			if (result == -1) {
				printf("\n�X�^�b�N����ł�\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", date);
				display();
			}
		}
	} while (key != 'e');
}

//�X�^�b�N�\���֐�
void display(void)
{
	int i;
	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("sp�������Ă��鏊(����sp��%d)", sp);
		}
		printf("\n");
	}
	return;
}