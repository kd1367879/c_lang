#include<stdio.h>
main()
{
	int i, num, j;
	printf("”‚ÍH");
	scanf("%d", &num);
	i = 0;
	j = 0;
	do
	{
		i = 0;
		do//‹ó”’—p
		{
			printf(" ");
			i++;
		} while (i < num - j);

		i = 0;
		do//*—p
		{
			printf("*");
			i++
		} while (i < j + 1);
		printf("\n");
		j++;

	} while (j < num);
}