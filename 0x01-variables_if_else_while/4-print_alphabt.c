#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase followed by a new line
 * Return: Always 0
*/
int main(void)
{
	char b;
for (b = 'a'; b <= 'z'; b++)
{
if (b != 'e' && b != 'q')
	putchar(b);
}
putchar('\n');
return (0);
}
