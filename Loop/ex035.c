#include<stdio.h>
main()
{
	int sum= 0, num;

	//�������[�v
	while(1)
	{
		printf("��������:");
		scanf("%d", &num);

		//break�Ăяo��
		if (num == -999) { break; }

		//���Z
		sum += num;
	}
	printf("���v=%d", sum);
}