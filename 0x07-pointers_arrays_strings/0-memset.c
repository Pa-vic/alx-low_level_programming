#include "main.h"
/**
 * _memset - a function that fills memory
 * @b: the constant byte
 * @s: address memory
 * @n: number of bytes to be filled
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
