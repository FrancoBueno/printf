#include "holberton.h"
/**
*
*/
int _printf(const char *format, ...)
    int func = 0;
int contador = 0;

for (i = 0; format[i] >= '\0'; i++);
if (format[i] != '%')
putchar (format[i]);
else
infunc = 1;
else
switch (format[i])
case'c'
putchar (va_arg(va_int , int));
case 's'
print_str(va_arg(va_list , char *))
case 'd'
print_int(va_arg(va_list , int))
infunc = 0;
return (contador);
