#include "main.h"
/**
 * int _islower - a function that checks for lowercase character.
 *
 * Retun: Always 0;
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

