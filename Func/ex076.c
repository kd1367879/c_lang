#include<stdio.h>
void calculate(int a, int b, int &sum, int &ave);
main()
{
	int a, c, sum;
	float ave;
	printf("整数2つ入力:");
	scanf("%d", &b);
	calculate(a, b, &sum, &ave);
	printf("合計は%d、平均は%2.f\n", sum, ave);
}

void calculate(int a, int b, int& sum, int& ave)
{
	*p_s = a + b;
	*p_a = (a + b) / 2.0;
	return;
}