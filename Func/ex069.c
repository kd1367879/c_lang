#include<stdio.h>
main()
{
	int a, k = 0, ret, cnt = 0;
	printf("®”:");
	ret = scanf("%d", &a);
	while (ret != EOF)
	{
		k += a;
		cnt++;
		printf("®”:");
		ret = scanf("%d", &a);
	}
	printf("‡Œv=%d@•½‹Ï=%.2f", k, (float)k / cnt);
}