#include <stdio.h>
/*
*function main : program that printd "_putchar" from a character array
**
* Returns : 0 on (success)
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		putchar(c[i]);
	}
	return (0);
}
