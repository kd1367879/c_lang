#include<stddioh>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, date, result;
	do {
		printf("\n\n�G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &date);
			result = push(date);
			if (result == -1) {
				printf("\n�L���[����t�ł�\n");
			}
			else {
				display();
			}
		}

		//�|�b�v����
		if (key == 'o') {
			result = dequeue(&date);
			if (result == -1) {
				printf("\n�L���[����ł�\n");
			}
			else {
				printf("�L���[����f�[�^(%d)�����o���܂���\n", date);
				display();
			}
		}
	} while (key != 'e');
}

void dispaly(void)
{
	int i;

	printf("\n===���݂̃L���[�̓��e===\n");
	for(i=0;i<QUEUESIZE;i++)
}