#include<stdio.h>
enum BitState
{
	Base = 0,             //00000000 通常状態
	poison = 1 << 0,     //00000001 毒状態
	Sleep = 1 << 1,      //00000010 ねむり状態
	Paralisis = 1 << 2,  //00000100 まひ状態
	Burn = 1 << 3,       //00001000 やけど状態
	AtkUp = 1 << 4,      //00010000 攻撃力アップ状態
	AtkDown = 1 << 5,    //00100000 攻撃力ダウン状態
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
		printf("どの状態にしますか\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:入力終了>");
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
		default:  //1〜6に当てはまらないとき
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態を解除しますか?\n");
		printf("1:毒 2 : 睡眠 3 : 麻痺 4 : 火傷 5 : 攻撃↑ 6 : 攻撃↓ 0 : 入力終了 > ");
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





















