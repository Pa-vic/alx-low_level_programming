#include "main.h"
/**
 * _strchr - a function to locate a character
 * @s: pointer string
 * @c: character to out for
 * Return: s at the first occurance of character else NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (*(s + i) != '\0')
	{
	if (*(s + i) == c)
		return (s + i);
	i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (\0);
}
