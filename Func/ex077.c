#include<stdio.h>
void maxmin(int a, int b, int c, int *p_max, int *p_min);
main()
{
	int a, b, c, max, min;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値=%d　　　最小値=%d\n", max, min);
}

void maxmin(int a, int b, int c, int* p_max, int* p_min)
{
	*p_max = a;
	if (b > *p_max)
	{
		*p_max = b;
	}
	if (c > *p_max)
	{
		*p_max = c;
	}

	*p_min = a;
	if (b < *p_min)
	{
		*p_min = b;
	}
	if (c < *p_min)
	{
		*p_min = c;
	}
}