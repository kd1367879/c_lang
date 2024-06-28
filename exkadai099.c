#include<stdio.h>
main()
{
	char date[100];
	int cnt, i;
	printf("‰ñ”‚Æ•¶š—ñ‚ğ“ü—Í:");
	scanf("%d%s", &cnt, date);
	for (i = 0; i < cnt; i++) {
		printf("%s\t", date);
	}
}