#include<stdio.h>
void calculate(int a, int b, int &sum, int &ave);
main()
{
	int a, c, sum;
	float ave;
	printf("����2����:");
	scanf("%d", &b);
	calculate(a, b, &sum, &ave);
	printf("���v��%d�A���ς�%2.f\n", sum, ave);
}

void calculate(int a, int b, int& sum, int& ave)
{
	*p_s = a + b;
	*p_a = (a + b) / 2.0;
	return;
}