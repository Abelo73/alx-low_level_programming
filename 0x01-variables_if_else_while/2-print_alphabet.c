#include <stdio.h>
#include <stdlib.h>
/**
 * main - goes here
 *
 * Return: if @(Success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
