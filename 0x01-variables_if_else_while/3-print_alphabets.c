#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';
	char d = 'A';
	/* Print lowercase alphabet */
	while (c <= 'z') {
		putchar(c);
		c++;
	}
	/* Print uppercase alphabet */
	while (d <= 'Z') {
		putchar(d);
		d++;
	}
	/* Print newline */
	putchar('\n');
	return (0);
}
