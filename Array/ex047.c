#include<stdio.h>
main()
{
	float x[3][2];
	int i, j;
	float gokei;

	for (i = 0; i <= 3; i++)//�s�������̃��[�v
	{
		for (j = 0; j < 2; j++)//������̃��[�v
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		//���ϒl�̕\��
		//printf("%d�s�ڂ̕���=%.2f\n",i,(x[i][0] + x[i][1]) / 2);
		printf("%d�s�ڂ̕���=%.2f\n", i, gokei / j);
	}
}