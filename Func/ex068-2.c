#include<stdio.h>
main()
{
	char dumy[256];
	char* cp;
	
	printf("•¶š‚ğ“ü—Í");
	cp = gets(dumy);

	while (cp != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", cp);
		printf("•¶š—ñ“ü—Í„");
		cp = gets(dumy);
	}
}