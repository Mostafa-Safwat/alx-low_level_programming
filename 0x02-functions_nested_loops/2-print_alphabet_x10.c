#include "main.h"
/**
 * print_alphabet_x10 - prints all letters in lowercase 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(alph[i]);
}
_putchar('\n');
}
}
