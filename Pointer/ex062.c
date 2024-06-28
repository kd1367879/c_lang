#include<stdio.h>
main()
{
	char* p = "peach";
	char date1[10] = "banana", * p_date1;
	char date2[10], * p_date2;
	p_date1 = date1;
	p_date2 = date2;
	while (*p_date2++ = *p_date1++);
	p_date1 = date1;
	while (*p_date1++ = *p++);
	p_date1 = date1;
	p_date2 = date2;
	printf("date1[]=%s\n", p_date1);
	printf("date2[]=%s\n", p_date2);
}