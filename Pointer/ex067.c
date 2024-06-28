#include<stdio.h>
#include<string.h>

#define CNT   4

main()
{
	char* p_tbl[] = { "Progtamming2","Algorithm"
					 ,"Proramming1","C" }, * w;
	char** p = p_tbl;
	int i, j;
	for (i = 0; i < CNT - 1; i++) {
		for (j = i + 1; j < CNT; j++) {
			if (strcmp(*(p+i),*(p+j)) < 0)
			{
				w=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=w;
			}
		}
	}
	for (p = p_tbl, i = 0; i < CNT; i++) {
		printf("%s\n",*(p+i));
	}
}