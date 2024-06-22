#include <stdio.h>
/**
 *  main -Entry point
 *
 *  Return: Always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
    char c = 'a';

    // Print lowercase alphabet
    while (c <= 'z') {
        putchar(c);
        c++;
    }

    c = 'A';

    // Print uppercase alphabet
    while (c <= 'Z') {
        putchar(c);
        c++;
    }

    // Print newline
    putchar('\n');

    return (0);
}
