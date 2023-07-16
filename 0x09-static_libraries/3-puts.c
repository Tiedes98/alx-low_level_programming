#include "main.h"

/**
 * _puts - progress prints a string to stdout.
 * @str: The string that is going to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\0');
}
