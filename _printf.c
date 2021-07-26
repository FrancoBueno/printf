#include "holberton.h"
#include <stdarg.h>

/**
 *_printf - Main function
 *@format: read the string
 *Return: size of bytes of string of char<
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, flag = 0;

	if (format)
	{
		va_start(list, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (!flag)
			{
				if (format[i] != '%')
					_putchar(format[i]);
				else
					flag = 1;

			}
			else
			{
					switch (format[i])
					{
					case 's':
						_putchar('t');
						break;
					case 'c':
						_putchar('h');
						break;

					case '%':
						_putchar('%');
						break;
					}
			}
		}
va_end(list);

return (i);
}
}
