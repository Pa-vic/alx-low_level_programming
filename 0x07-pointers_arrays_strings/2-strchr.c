#include "main.h"
/**
 * _strchr - a function to locate a character
 * @s: pointer string
 * @c: character to out for
 * Return: s at the first occurance of character else NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	while (*(s + a) != '\0')
	{
	if (*(s + a) == c)
		return (s + a);
	a++;
	}
	if (*(s + a) == c)
		return (s + a);
	return (\0);
}
