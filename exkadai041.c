#include<stdio.h>
main()
{
	int gokei, se, hei;

		gokei = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &se);
	while (se != -999) {
		gokei += se;
		printf("整数(-999で終了)？");
		scanf("%d", &se);
		hei = (float)gokei / hei;
	}
	printf("合計=%d\n", gokei);
	printf("平均=%.2f \n", hei);
}