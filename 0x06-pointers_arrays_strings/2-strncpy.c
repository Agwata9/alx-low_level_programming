#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: pointer for the first string.
 * @s2: pointer for the second string.
 *
 * Return: Always (s1 -s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
