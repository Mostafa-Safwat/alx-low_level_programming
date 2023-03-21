#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i;
for (i = 0; i <= 10; i++)
{
int result = 9 * i;
if (result >= 10)
{
_putchar(result / 10 + '0');
}
_putchar(result % 10 + '0');
_putchar('\n');
}
}
