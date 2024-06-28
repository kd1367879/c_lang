#include<stdio.h>
enum BitState
{
	Base = 0,             //00000000 �ʏ���
	poison = 1 << 0,     //00000001 �ŏ��
	Sleep = 1 << 1,      //00000010 �˂ނ���
	Paralisis = 1 << 2,  //00000100 �܂Џ��
	Burn = 1 << 3,       //00001000 �₯�Ǐ��
	AtkUp = 1 << 4,      //00010000 �U���̓A�b�v���
	AtkDown = 1 << 5,    //00100000 �U���̓_�E�����
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyAtate);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(Mystate);
}
void DisplayStatus(UINT s) {

}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I��>");
			scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralisis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:  //1�`6�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2 : ���� 3 : ��� 4 : �Ώ� 5 : �U���� 6 : �U���� 0 : ���͏I�� > ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralisis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = base;
			break;
		default:
			break;
		}
	}
}





















