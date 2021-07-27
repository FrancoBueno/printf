#include "holberton.h"
#include <stdarg.h>
#define BUFFER_SIZE 1024;
/**
 * _printf - Print in screen text
 * @format: string of characters
 * Return: num of bytes
 */
int _printf(const char *format, ...)
{	va_list lista;
	int i = 0, cont = 0, flag = 0;

	if (format)
	{
		va_start(lista, format);
		if (lista == NULL)
			return (-1);
		if (format == NULL || (format[0] == '%' && format[i] == '\0'))
				return (-1);
		for (; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
					cont += _putchar(format[i]);
				else
					flag = 1;
			}
			else
			{
				switch (format[i])
				{
				case 'c':
					cont += _putchar(va_arg(lista, int));
					break;
				case 's':
					cont += print_str(va_arg(lista, char *));
					break;
				case '%':
					cont += _putchar('%');
					break;
				case 'd':
					cont += print_numbers(va_arg(lista, int));
					break;
				case 'i':
					cont += print_numbers(va_arg(lista, int));
					break;
				case '\0':
				case ' ':
					return (-1);
					break;
				default:
					cont += _putchar('%');
					cont += _putchar(format[i]);
				}
				flag = 0;
			}
		}
		va_end(lista);
	}
	else
	{
		return (-1);
	}
	return (cont);
}
