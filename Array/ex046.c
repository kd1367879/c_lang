#include<stdio.h>
main()
{
	int i, gokei, j;
	/*�z��̐擪�v�f���̂ݏȗ��ł���*/
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};

	for (i = 0;; i++)
	{
		for (gokei = 0, j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
	     printf("%d�s�ڂ̍��v=%d\n\n", i, gokei);
    }
}