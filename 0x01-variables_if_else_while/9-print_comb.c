#include <stdio.h>
/**
 *  main - Prog Entry point
 *
 *  Retrun: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
