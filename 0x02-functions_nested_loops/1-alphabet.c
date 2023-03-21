#include "main.h"
/**
 * main - prints all letters in lowercase
 *
 * Return: void.
 */
void print_alphabet(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
_putchar(alph[i]);
_putchar('\n');
}
