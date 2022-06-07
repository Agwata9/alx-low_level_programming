#include <stdio.h>
/*
*Main : program that printd "_putchar" from a character array
**
* Returns : 0 on (success)
*/
int main(void)
/*
*Main : program that printd "_putchar" from a character array
*/
{
	char c[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		putchar(c[i]);
	}
	return (0);
}
