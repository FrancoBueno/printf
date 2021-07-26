#include "holberton.h"

/**
 *
 *
 */

int print_str(char *c)
{
	int i;
	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar (c[i]);
		}
	}
	return (i);
}
