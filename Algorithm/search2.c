#include<stdio.h>
main()
{
	int s, i;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };

	for (i = 0; i < 10; i++)
	{
		printf("%02d", d[i]);
	}
	 printf("’Tõ’ls‚ğ“ü—Í:");
	 scanf("%d", &s);
	 i = 0;
	 while (s != d[i])
	 {
		 i++;
	 }
	 if (i >= 10)
	 {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	 }
	else 
	{
		 printf("’Tõ’ld[%d]‚Å”­Œ©I\n", i);
	}
}