#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int len = 0;
char *begin, *end, tmp;
while (*(s + len))
{
len++;
}
begin = s;
end = s + len - 1;

while (begin < end)
{
tmp = *begin;
*begin = *end;
*end = tmp;
begin++;
end--;
}
}
