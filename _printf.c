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
	int flag = 0;
	int count = 0;

	if (!format)
	for (i = 0; format[i] != '\0'; i++);
	if (!flag)
	if (format[i] != '%')
	count+=	_putchar(format[i]);
	else
		flag = 1;
	else
	{
	va_start list;
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
