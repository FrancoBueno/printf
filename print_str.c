#include "holberton.h"
/**
 *
 */
print_str(char *s)
	int i;
if (s)
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
return (i);
