#include<stdio.h>

#define NIN 5

struct day {
	int nen;
	int tuki;
	int hi;
};

struct profile {
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[NIN] = { {"AAAAA",2000,1,1,"A"},
	{"BBBBB", 2000, 2, 2, "B"},
	{"CCCCC", 2000, 3, 3, "O"},
	{"DDDDD", 2000, 2, 19, "AB"},
	{"EEEEE", 2000, 10 10, "A"} };
	

	struct profile* p;
	int i;

	for (p = data, i = 0; i < NIN; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d ”N %d ŒŽ %d“ú¶ ŒŒ‰tŒ^-%sŒ^\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}