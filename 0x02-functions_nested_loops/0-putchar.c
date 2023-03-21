#include "main.h"
/**
 * main - loop that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
char c[] = "_putchar\n";
int i;
for (i = 0; i < 9; i++)
_putchar(c[i]);
return (0);
}
