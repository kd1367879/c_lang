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
	printf("–¼‘O‚ğ“ü—Í:");
	gets(date.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &date.birth[0], &date.birth[1], &date.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", date.blood);
	printf("%s-%d”N%dŒ%d“ú¶@ŒŒ‰tŒ^-%sŒ^\n",
		date.name,
		date.birth[0], date.birth[1], date.birth[2],
		date.blood);
}