#include<stdio.h>
main()
{
	char date[100];
	int cnt, i;
	printf("回数と文字列を入力:");
	scanf("%d%s", &cnt, date);
	for (i = 0; i < cnt; i++) {
		printf("%s\t", date);
	}
}