#include "main.h"

/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 *
 */
void print_alphabet_x10(void)
{
char b;
int a;

for (a = 0; a < 10 ; a++)
{
for (b = 'a' ; b <= 'z' ; b++)
{
_putchar(b);
}
_putchar('\n');
}
}


