#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - a function that reverses a string
* @s: string to reverse
* Return: Nothing
*/

void rev_string(char *s)
{
char n;
int x;
int len = 0;
int l = 0;
char *y = s;
int e = 0;

while (*y != '\0')
{
y++;
len++;
}
l = len - 1;
for ( ; e < ((l / 2) + 1) ; e++)
{
x = (l - e);
n = s[e];
s[e] = s[x];
s[x] = n;
}
}
