#include<stdio.h>
enum BitState
{
	Base = 0,             //00000000 ’Êíó‘Ô
	poison = 1 << 0,     //00000001 “Åó‘Ô
	Sleep = 1 << 1,      //00000010 ‚Ë‚Ş‚èó‘Ô
	Paralisis = 1 << 2,  //00000100 ‚Ü‚Ğó‘Ô
	Burn = 1 << 3,       //00001000 ‚â‚¯‚Çó‘Ô
	AtkUp = 1 << 4,      //00010000 UŒ‚—ÍƒAƒbƒvó‘Ô
	AtkDown = 1 << 5,    //00100000 UŒ‚—Íƒ_ƒEƒ“ó‘Ô
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
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:“ü—ÍI—¹>");
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
		default:  //1`6‚É“–‚Ä‚Í‚Ü‚ç‚È‚¢‚Æ‚«
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©?\n");
		printf("1:“Å 2 : ‡–° 3 : –ƒáƒ 4 : ‰Î 5 : UŒ‚ª 6 : UŒ‚« 0 : “ü—ÍI—¹ > ");
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





















