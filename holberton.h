
#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/* PROTOTYPES */
int _printf(const char *format, ...);
int _strlen(char *);
int _putchar(char c);
int print_str(char *c);
int print_numbers(long int n);
int print_oct(unsigned int num);
int print_unt(unsigned int num);
int print_hex(unsigned int num);
int print_hexlow(unsigned int num);
#endif
