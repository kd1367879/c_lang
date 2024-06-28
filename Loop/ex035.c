#include<stdio.h>
main()
{
	int sum= 0, num;

	//無限ループ
	while(1)
	{
		printf("数を入れて:");
		scanf("%d", &num);

		//break呼び出す
		if (num == -999) { break; }

		//加算
		sum += num;
	}
	printf("合計=%d", sum);
}