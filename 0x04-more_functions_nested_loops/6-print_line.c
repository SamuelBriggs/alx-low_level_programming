#include "main.h"
/**
**print_line - function that checks for uppercase character.
**@n: is the integer for the paramaters of my function
** Return: 0
**/
void print_line(int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (n > 0)
{
_putchar('_');

}
else
{
_putchar('\n');
}
}
_putchar('\n');
}
