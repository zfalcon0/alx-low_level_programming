#include <stdio.h>

/**
* print_alphabet - entry point
*
* Description: Prints the alphabet with _putchar
*
* Return: void
*/


void print_alphabet(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

}
