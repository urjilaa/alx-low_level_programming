#include "main.h"
/**
 * _islower -shows 1 if the inpute is a
 * lowercase character. Another cases, shhows
 * 0
 *
 * @c: The character i ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c<= 122)
        {
		return (1);
	}
	else
	{
		return (0);
	}
	_putcar('\n');
}
