#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++)
	{
		printf("%02d", d[i]);
	}
	 printf("�T���ls�����:");
	 scanf("%d", &s);
	 i = 0;
	 while (s != d[i])
	 {
		 i++;
	 }
	 if (i >= 10)
	 {
		printf("������Ȃ�����\n");
	 }
	else 
	{
		 printf("�T���ld[%d]�Ŕ����I\n", i);
	}
}