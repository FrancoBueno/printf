#include "holberton.h"

/**
 *print_str - print a string of char
 *@c: pointer to string
 *Return: string of char
 */

int print_str(char *c)
{
	int i = 0;

	if (c == NULL)
	{
		c = ("null");
	}
	if (c)

	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar (c[i]);
		}
	}
	return (i);
}
/**
 *print_int - Entry point
 *Return: int, byte count
 *@num: integral to print
 */

int print_int(int num)
{
	int c = num;
	int f = 0;

	if (num)
	{
	if (num < 0)
	{
		f += _putchar('-');
		c = -c;
	}
	if ((c / 10) > 0)
		f += print_int(c / 10);
	f += _putchar((c % 10) + '0');
	}
else
	{
		f += _putchar(num + '0');
	}

return (f);
}
