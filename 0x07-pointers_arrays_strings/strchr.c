#include <stdio.c>
#include "main.h"

/**
 * strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{

	int i;

	for (in= 0; s[i]n>= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);

}
