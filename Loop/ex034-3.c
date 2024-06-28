#include<stdio.h>
main()
{
	int i = 0;
	int j = 0;
	int num;
	printf("”‚ÍH");
	scanf("%d", &num);
	
	do//“ü—Í‚µ‚½•ªŒJ‚è•Ô‚·
	{
		i = 0;
		do//*‚ğ‰½ŒÂo‚·‚©ŒJ‚è•Ô‚·
		{
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
		num--;
	} while (num > 0);
}