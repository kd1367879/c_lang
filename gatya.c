#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int g;
	srand(time(0));
	g = rand() % 100 + 1;
	if (g >= 50) {
		printf("���m�[�}��\n");
	}
	else{
		if (g >= 20) {
		printf("���� ���A\n");
	}
		else{
			if (g >= 6) {
				printf("������SR\n");
			}
			else{
				if (g >= 2) {
					printf("��������UR\n");
				 }
				else {
					if (g >= 1) {
						printf("����������LR\n");
					}
				}
             
			}