#include<stdio.h>
main()
{
	int num = 0;      //入力用
	int sum = 0;  //合計値用
	int cnt = 0;  //カウント用

	do
	{
		sum += num;//加算
		cnt++;
		printf("整数(-999で終了)");
		scanf("%d", &num);
	} while (num != -999);

	cnt--;         //最初の１回分を引く

	printf("合計=%d\n", sum);
	printf("平均=%f\n", (float)sum / (float)cnt);
}