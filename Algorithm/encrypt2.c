#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[50];
	int i, n, k[49];
	srand(time(0));
	printf("���������͂��Ă�������:");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("�Í����������%s\n�Í��L�[��", s);
	n = 0;
	while (n < i) {
		printf("%d", k[n]);
		n++;
	}
}