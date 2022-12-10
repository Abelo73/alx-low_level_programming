#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet exect q and e
 *
 * Return: Always @(Success)
 *
 */
int main(void)
{
	int ch  = 'a';
	
	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
