#include<stdio.h>
main()
{
	int sum,num,i;
	printf("”‚ÍH");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++) {
		    sum += num;
			printf("”‚ÍH");
			scanf("%d", &num);
	}
	printf("‡Œv=%d \t •½‹Ï=%.2f\n", sum,(float)sum / i);
}