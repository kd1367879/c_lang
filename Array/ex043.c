#include<stdio.h>
main()
{
	char a[] = "orange";
	int cnt;

	cnt = 0;
	while (a[cnt] != '\0'); {
		cnt++;
	}
	printf("文字列:%s\n", &a[0]);
	printf("文字数は%d 文字\n", cnt);
}