#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
* attempts to write nbyte bytes from the buffer
* Return: Always 1 (Success)
*/
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
