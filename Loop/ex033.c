#include<stdio.h>
main()
{
	int sum,num,i;
	printf("数は？");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++) {
		    sum += num;
			printf("数は？");
			scanf("%d", &num);
	}
	printf("合計=%d \t 平均=%.2f\n", sum,(float)sum / i);
}