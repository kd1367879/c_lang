#include<stdio.h>
main()
{
	int i = 0;
	int j = 0;
	int num;
	printf("���́H");
	scanf("%d", &num);
	
	do//���͂������J��Ԃ�
	{
		i = 0;
		do//*�����o�����J��Ԃ�
		{
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
		num--;
	} while (num > 0);
}