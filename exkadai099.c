#include<stdio.h>
main()
{
	char date[100];
	int cnt, i;
	printf("�񐔂ƕ���������:");
	scanf("%d%s", &cnt, date);
	for (i = 0; i < cnt; i++) {
		printf("%s\t", date);
	}
}