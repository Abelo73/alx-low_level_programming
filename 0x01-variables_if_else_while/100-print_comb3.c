#include <stdio.h>
/**
 *
 * main - prints two digits numbers but there is
 *
 * Return: Always @(Success)
 *
 */
int main(void)
{
	for(int a = '0'; a <= '9'; a++)
	{
		for (int b = '1'; b <= '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
		}
	}
	return (0);
}
