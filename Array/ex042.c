#include<stdio.h>
main()
{
	char a[] = "Apple";
	int i;
	printf("1�������\��\n");
	i = 0;
	while (a[i] != '\0') {
		printf("%c", a[i]);
		i = i + 1;//i++�ł���
	}
	printf("\n������\��\n");
	printf("%s", &a[0]);
}