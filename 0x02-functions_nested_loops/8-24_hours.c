#include "main.h"

/**
* jack_bauer - print every minute of the day
*
* Return: Nothing
*/

void jack_bauer(void)
{
int i = 0;
int j = 0;

for (j = 0; j <= 23; j++)
{
for (i = 0; i <= 59; i++)
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar('\n');
}
}
}
