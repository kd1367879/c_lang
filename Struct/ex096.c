#include<stdio.h>
struct syohin_date {
	char name[20];
	int tanka;
};
void display3(struct syohin_date* sp);

main()
{
	struct syohin_date syohin = { "ƒPƒVƒSƒ€",50 };
	display3(&syohin);
}

void display3(struct syohin_date* sp)
{
	printf("syohin->name=%s syohin->tanka=%d\n", sp->name, sp->tnaka);
}