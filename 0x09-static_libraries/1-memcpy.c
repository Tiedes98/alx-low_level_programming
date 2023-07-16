#include "main.h"
/**
 * _memcpy - a function which copies a memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copy memory with a change of n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] - src[i];
		n--;
	}
	return (dest);
}
