#include<stdio.h>
main()
{
	int i = 0;
	int j = 0;
	int num;
	printf("数は？");
	scanf("%d", &num);
	
	do//入力した分繰り返す
	{
		i = 0;
		do//*を何個出すか繰り返す
		{
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
		num--;
	} while (num > 0);
}