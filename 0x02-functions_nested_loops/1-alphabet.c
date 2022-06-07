#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
}
