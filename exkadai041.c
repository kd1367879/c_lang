#include<stdio.h>
main()
{
	int gokei, se, hei;

		gokei = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &se);
	while (se != -999) {
		gokei += se;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &se);
		hei = (float)gokei / hei;
	}
	printf("���v=%d\n", gokei);
	printf("����=%.2f \n", hei);
}