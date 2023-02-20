#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase and then in uppercase
 * Return: Always 0
*/
int main(void)
{
	char m;
	char n;

	for (m = 'a'; m <= 'z'; m++)
{
	putchar(m);
}
        for (n = 'A'; n <= 'Z'; n++)
{
	putchar(n);
}
        putchar('\n');
        return (0);
