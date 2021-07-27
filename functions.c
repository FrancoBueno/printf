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
int print_numbers(int n)
{
	int b = 0;

	{
		if (n < 0)
		{
			_putchar('-');
			b = (print_numbers(n * -1)) + 1;
			return (0);
		}
		if (n < 10)
		{
			_putchar(n + '0');
			return (1);
		}
		else
		{
			b = (print_numbers(n / 10)) + 1;
			_putchar((n % 10) + '0');
			return (b);
		}
	}
}
