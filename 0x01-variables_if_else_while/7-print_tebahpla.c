#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
