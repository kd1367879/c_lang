#include<stdio.h>

#define STACKSIZE 8     //スタックサイズ
int stack[STACKSIZE];   //スタック領域用配列
int sp = 0;             //スタックポインタ(配列の添え字用)

//関数プロトタイプ宣言
void display(void);
int push(int d);
int pop(int* pd);

//メイン関数
main()
{
	int key, date, result;
	do {
		printf("\n\n?プッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		//プッシュ処理
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &date);
			result = push(date);
			if (result == -1) {
				printf("\nスタックが一杯です\n");
			}
			else {
				display();
			}
		}

		//ポップ処理
		if (key == 'o') {
			result = pop(&date);
			if (result == -1) {
				printf("\nスタックが空です\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", date);
				display();
			}
		}
	} while (key != 'e');
}

//スタック表示関数
void display(void)
{
	int i;
	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("spが示している所(現在spは%d)", sp);
		}
		printf("\n");
	}
	return;
}