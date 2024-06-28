#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;
	printf("何を出しますか？\n");
	printf("（1:グー ２：チョキ 3:パー)");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("プレイヤーはグーです\n");
	}
	if (pl == 2) {
		printf("プレイヤーはチョキです\n");
	}
	if (pl == 3) {
		printf("プレイヤーはパーです\n");
	}
	srand(time(0));
	cpu = rand() % 3;
	if (cpu == 1) {
		printf("コンピューターはグーです\n");
	}
	if (cpu == 2) {
		printf("コンピューターはチョキです\n");
	}
	if (cpu == 3) {
		printf("コンピューターはパーです\n");
	}
	//プレイヤー負けパターン
	if((pl==1&&cpu==1)
		|| (pl == 2 && cpu == 2) 
		|| (pl == 3 && cpu == 0)){
		printf("プレイヤーの負けです\n");
    }
	//あいこパターン
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("あいこです\n");
	}
	//プレイヤー勝ちパターン
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0)) {
		printf("プレイヤーの勝ちです\n");
	}
}