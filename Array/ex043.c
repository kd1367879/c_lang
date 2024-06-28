#include<stdio.h>
main()
{
	char a[] = "orange";
	int cnt;

	cnt = 0;
	while (a[cnt] != '\0'); {
		cnt++;
	}
	printf("•¶š—ñ:%s\n", &a[0]);
	printf("•¶š”‚Í%d •¶š\n", cnt);
}