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
	printf("名前を入力:");
	gets(date.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &date.birth[0], &date.birth[1], &date.birth[2]);
	printf("血液型を入力:");
	scanf("%s", date.blood);
	printf("%s-%d年%d月%d日生　血液型-%s型\n",
		date.name,
		date.birth[0], date.birth[1], date.birth[2],
		date.blood);
}