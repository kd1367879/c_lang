#include<stdio.h>
struct syohin_date{
	char name[20];
    int tanka;
};

main()
{
	struct syohin_date syohin;
	struct syohin_date* p;
	p = &syohin;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("syohin.name=%s\n", syohin.name);
	printf("syohin.tanka=%d\n", syohin.tanka);
}