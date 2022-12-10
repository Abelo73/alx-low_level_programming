#include <stdio.h>
/**
 * main - prints decimal numbers 0 to 9
 *
 */
int main(void)
{
	int d = '0';
	while (d <= '9')
	{
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
