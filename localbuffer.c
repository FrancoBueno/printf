#include <unistd.h>
#include "holberton.h"
/**
 *printfbufferoverflow - prints the buffer only if the number of characters is 1024
 *@buffer: the buffer 
 *
 *Return: 1024 since
 */
int printf_buffer ( char *buffer)
{ write (1, buffer, 1024);
  return (1024);
}
