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
		printf("\n\nエンキューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");

		//エンキュー処理
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &date);
			result = push(date);
			if (result == -1) {
				printf("\nキューが一杯です\n");
			}
			else {
				display();
			}
		}

		//ポップ処理
		if (key == 'o') {
			result = dequeue(&date);
			if (result == -1) {
				printf("\nキューが空です\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", date);
				display();
			}
		}
	} while (key != 'e');
}

void dispaly(void)
{
	int i;

	printf("\n===現在のキューの内容===\n");
	for(i=0;i<QUEUESIZE;i++)
}