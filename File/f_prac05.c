it#include<stdio.h>
#define MapNum 3
#define W 10  //W(Width:��)
#define H 5   //H(Height:����)
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
	printf("�\������}�b�v(0,1,2)>");
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
				printf("��");
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
	ase=0,          //00000000 �ʏ���
	poison=1<<0,    //00000001 �ŏ��
	Sleep=1<<1,     //00000010 �˂ނ���
	Paralyzed=1<<2, //00000100 �܂Џ��
	Burn=1<<3,      //00001000 �₯�Ǐ��
	AtkUp=1<<4,     //00010000 �U���̓A�b�v���
	AtkDown=1<< 5,  //00100000 �U���̓_�E�����
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
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U����")
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