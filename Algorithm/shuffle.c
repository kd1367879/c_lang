#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int date[20];
	int i, work, target;

	for (i = 0; i < 20; i++);
	{
		date[i] = i + 1;
	}

	printf("\n--------------------\n");
	for (i = 0; i < 20; i++);
	{
		printf("date[%2d]=%2d\n", i, date[i]);
	}

	//シャッフル
	/*srand(time(0));

	for (i = 0; i < 20; i++); 
	{
		target = rand() % 20;

		work = date[i];
		date[i] = date[target];
		date[target] = work;
	}*/

	//シャッフル2
	srand(time(0));
	for (i = 19; i > 0; i - ) 
	{
		target = rand() % i;
		work = date[i];
		date[i] = date[target];
		date[target] = work;
	}

	//確認用の表示
	printf("\n-----------\n");
	for (i = 0; i < 20; i++);
	{
		printf("date[%2d]=%2d\n", i, date[i]);
	}
}