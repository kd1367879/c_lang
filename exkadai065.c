#include<stdio.h>
main()
{
	int num = 0;      //���͗p
	int sum = 0;  //���v�l�p
	int cnt = 0;  //�J�E���g�p

	do
	{
		sum += num;//���Z
		cnt++;
		printf("����(-999�ŏI��)");
		scanf("%d", &num);
	} while (num != -999);

	cnt--;         //�ŏ��̂P�񕪂�����

	printf("���v=%d\n", sum);
	printf("����=%f\n", (float)sum / (float)cnt);
}