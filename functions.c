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
long int print_numbers(int n)

{
	int b = n;
	int f = 0;
	{
		if (n < 0)
		{
			f += _putchar('-');
			b = -b;
		}
		if ((b / 10) > 0)
		{
			f += print_numbers(b / 10);
			f += _putchar((n % 10) + '0');
		}
		else
		{
			f += _putchar (n + '0');
		}
	}
	return (f);
}
