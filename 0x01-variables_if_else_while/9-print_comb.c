#include <stdio.h>
/**
 *main - main block
 *prints all single digit numbers of base 16
 *start from 0, followed by a comma and a space.
 *Return: always  0
 */
int main(void)
{
int n;
for  (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
