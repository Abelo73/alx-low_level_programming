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
	int ch = 'f';

	while ((hexa >= '9') && (ch >= 'a'))
			{
			putchar(hexa);
			hexa++;
			putchar(ch);
			ch--;
			putchar('\n');
			}
			return (0);

}
