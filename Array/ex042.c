#include<stdio.h>
main()
{
	char a[] = "Apple";
	int i;
	printf("1文字ずつ表示\n");
	i = 0;
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i = i + 1;//i++でも可
	}
	printf("\n文字列表示\n");
	printf("%s", &a[0]);
}