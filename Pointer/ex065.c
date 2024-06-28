#include<stdio.h>
#include<string.h>
main()
{
	char* p_tbl[] = { "Progtamming2","Algorithm"
	                 ,"Proramming1","C" }, * w;
	int i, j;
	for (i = o; i < CNT- 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(p_tbl[i], p_tbl[j]) > 0) {
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}
		}
	}
}