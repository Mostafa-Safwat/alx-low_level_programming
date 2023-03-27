#include "main.h"
/**
 * _puts - Prints a string
 * @str: String that the code prints
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
