#include <stdio.h>
/**
 * main - prints small aphabets reversly
 *
 * Return: Always @ (Success)
 *
 */

int main(void)
{
	int ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch, "\n");
		ch--;
	}
	return (0);
}