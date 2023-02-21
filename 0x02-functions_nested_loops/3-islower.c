#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

