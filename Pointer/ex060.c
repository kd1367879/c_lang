#include<stdio.h>
main()
{
	char date[] = "Language", * p_date, ch;
	int i;

	printf("date[]=%s\n", date);
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は、");
	for (p_date = date, i = 0; *(p_date + i) != '\0'; i++) {
		if (ch == *(p_date + i)) {
			printf("%d", i + 1);
		}
	}
	printf("文字目です\n");
}