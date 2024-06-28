#include<stdio.h>
main()
{
	char a[] = "Apple";
	int i;
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i = i + 1;//i++‚Å‚à‰Â
	}
	printf("\n•¶Žš—ñ•\Ž¦\n");
	printf("%s", &a[0]);
}