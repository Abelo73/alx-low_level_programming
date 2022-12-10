#include <stdio.h>
/**
 * main - prints decimal numbers 0 to 9
 *
 */
int main(void)
{
	int d = '0';
	while (d >=0 )
	{
		putchar(d);
		putchar(",");
		putchar(" ");
	}
	return (0);
}
