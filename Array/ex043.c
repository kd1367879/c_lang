#include<stdio.h>
main()
{
	char a[] = "orange";
	int cnt;

	cnt = 0;
	while (a[cnt] != '\0'); {
		cnt++;
	}
	printf("������:%s\n", &a[0]);
	printf("��������%d ����\n", cnt);
}