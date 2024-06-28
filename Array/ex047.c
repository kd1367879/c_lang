#include<stdio.h>
main()
{
	float x[3][2];
	int i, j;
	float gokei;

	for (i = 0; i <= 3; i++)//行方向分のループ
	{
		for (j = 0; j < 2; j++)//列方向のループ
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		//平均値の表示
		//printf("%d行目の平均=%.2f\n",i,(x[i][0] + x[i][1]) / 2);
		printf("%d行目の平均=%.2f\n", i, gokei / j);
	}
}