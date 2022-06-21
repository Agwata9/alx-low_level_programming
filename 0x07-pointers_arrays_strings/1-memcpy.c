include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: copied
 * @src: original
 * @n: limit
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
