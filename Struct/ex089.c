#include<stdio.h>
#include<string.h>
struct profile {
	char  name[20];
	int   birth[3];
	char  blood[5];
};

main()
{
	struct profile date;
	printf("���O�����:");
	gets(date.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &date.birth[0], &date.birth[1], &date.birth[2]);
	printf("���t�^�����:");
	scanf("%s", date.blood);
	printf("%s-%d�N%d��%d�����@���t�^-%s�^\n",
		date.name,
		date.birth[0], date.birth[1], date.birth[2],
		date.blood);
}