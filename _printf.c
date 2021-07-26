#include "holberton.h"
#include <stdarg.h>

/**
 *_printf - Main function
 *@i:read the string
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i;
	int count = 0;
	if (format != NULL)
	for (i = 0; format[i] != '\0'; i++);
	if (format[i] != '%')
	count+=	_putchar(format[i]);
	else
	flag = 1;
	if
	{
	va_start (list , format);
	switch (format[i])
	{
	case 's':
	count += print_str(va_list(va_int , int);
	 break;
	case 'c':
	count += _putchar(va_arg(list , int));
	 break;
	case '%':
	 count += _putchar('%');
	 break;
	}
	flag = 0;

	return(count);
	}
