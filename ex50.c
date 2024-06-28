/*ex049.c*/
/*ポインタ変数*/
#include<stdio.h>
main()
{
	int a = 100, b;/*変数の宣言*/
	int* p_a;/*ポインタの宣言*/
	p_a = &a;/*aのアドレスをp_aに入れる*/
	b = *p_a;/*p_a番地の中身をbに入れる*/
	printf("a=%d &a=%d p_a=%d *p_a=%d &p_a%d\n", a, &a,p_a,*p_a,&p_a);
}