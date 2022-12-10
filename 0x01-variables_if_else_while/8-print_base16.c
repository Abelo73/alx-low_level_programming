#include <stdio.h>
/**
 * main - printing hexa decimal
 *
 * Return: Always @(success)
 *
 */
int main(void)
{
	int hexa = '0';
	int ch = 'a';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
