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

	//�V���b�t��
	/*srand(time(0));

	for (i = 0; i < 20; i++); 
	{
		target = rand() % 20;

		work = date[i];
		date[i] = date[target];
		date[target] = work;
	}*/

	//�V���b�t��2
	srand(time(0));
	for (i = 19; i > 0; i - ) 
	{
		target = rand() % i;
		work = date[i];
		date[i] = date[target];
		date[target] = work;
	}

	//�m�F�p�̕\��
	printf("\n-----------\n");
	for (i = 0; i < 20; i++);
	{
		printf("date[%2d]=%2d\n", i, date[i]);
	}
}