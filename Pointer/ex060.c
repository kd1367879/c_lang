#include<stdio.h>
main()
{
	char date[] = "Language", * p_date, ch;
	int i;

	printf("date[]=%s\n", date);
	printf("���������́H");
	scanf("%c", &ch);
	printf("�������ʂ́A");
	for (p_date = date, i = 0; *(p_date + i) != '\0'; i++) {
		if (ch == *(p_date + i)) {
			printf("%d", i + 1);
		}
	}
	printf("�����ڂł�\n");
}