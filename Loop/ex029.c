#include<stdio.h>
main()
{
	int su, cnt;
	cnt = 0;
	printf("��������");
	scanf("%d", &su);

	cnt = 0;
	while (cnt < su)
	{
		printf("*");
		cnt += 1;
	}
}

