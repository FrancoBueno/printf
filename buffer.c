#include <unistd.h>
#include "holberton.h"
/**
 *printfbuffer - prints the buffer only if the number of characters = 1024
 *@buffer: the buffer being printed
 *@buffer:buffer itf
 *Return: 1024 
 */
int printf_buffer(char *buffer)
{
write(1, buffer, 1024);
return (1024);
}
