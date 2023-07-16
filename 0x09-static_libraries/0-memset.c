#include "main.h"
#include <string.h>
/**
 * _memset - program fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the ddesired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{

	for (; n > 0; b++)
	{
		n--;
	}
	return (s);
}
