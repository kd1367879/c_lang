it#include<stdio.h>
#define MapNum 3
#define W 10  //W(Width:幅)
#define H 5   //H(Height:高さ)
typedef struct {
	int m_map[H][W];
}Map;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map MapDate;
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示するマップ(0,1,2)>");
	scanf("%d", &select);
	SetMap(MapFileName[select], &MapDate);
	DrawMap(MapDate);
}
void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
enum BitState
{
	ase=0,          //00000000 通常状態
	poison=1<<0,    //00000001 毒状態
	Sleep=1<<1,     //00000010 ねむり状態
	Paralyzed=1<<2, //00000100 まひ状態
	Burn=1<<3,      //00001000 やけど状態
	AtkUp=1<<4,     //00010000 攻撃力アップ状態
	AtkDown=1<< 5,  //00100000 攻撃力ダウン状態
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
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓")
			scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
			case 1;
				s |=
		}
	}
}
void ClearFlag(UINT* s) {

}