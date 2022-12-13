#include "main.h"
/**
 * _islower - Retun 1 function that checks for lowercase character.
 * @c: char type letter for cheching character is lower or not
 * Retun: Always 0;
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

