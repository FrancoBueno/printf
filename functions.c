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
 * print_numbers - Print to screen integrals
 * @n: Number of integrals
 * Return: return Integral
 *
 */
int print_numbers(long int num)

{
	long int x = num;
	int i = 0;

	if (num)
	{
		if (num < 0)
		{
			i += _putchar('-');
			x = -x;
		}
		if ((x / 10) > 0)
			i += print_numbers(x / 10);
		i += _putchar((x % 10) + '0');
	}
	else
	{
		i += _putchar(num + '0');
	}
	return (i);
}
