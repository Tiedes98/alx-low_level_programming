#include "main.h"
/**
 * _isalpha - progress checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter and return 0 if it is not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
