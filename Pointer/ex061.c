#include<stdio.h>
main()
{
	char date[10] = "Orange";
	char* p_date;
	char* p = "Apple";
	p_date = date;
	printf("date[] = ");
	while (*p_date) {
		putchar(*p_date++);
	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}