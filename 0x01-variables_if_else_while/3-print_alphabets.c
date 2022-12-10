#include <stdio.h>
#include <stdlib.h>
/**
 * main - functions goes here
 *
 * Returns: @(Success)
 *
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++
	}
	putchar('\n');
	return (0);
}
