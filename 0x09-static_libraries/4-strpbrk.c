#include "main.h"
/**
 * _strpbrk - program entry point
 * @s: value input
 * @accept: value input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
	s++;
	}

	return ('\0');
}
