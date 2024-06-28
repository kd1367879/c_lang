#include<stdio.h>
main()
{
	char date[15] = "C Language";
	char date2[15];
	char* p_date, * p_date2;
	p_date = date;
	p_date2 = date2;
	printf("date[]=%s\n", p_date);
	while (*p_date2++ = *p_date++);
	p_date2 = date2;
	printf("date2[]=%s\n", p_date2);
	while (*p_date2) {
		putchar(*p_date2++);
	}
	putchar('\n');
}