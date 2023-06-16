#include <stdio.h>
/**
* main - main description
* Numbers must be separated by ,, followed by a space
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Return: 0
*/
int main(void)
{
	int n = 0;
	int f_d;
	int l_d;

	int n2;
	int f_d2;
	int l_d2;

	while (n <= 98)
	{
		f_d = (n / 10 + '0');
		l_d = (n % 10 + '0');
		n2 = 0;
		while (n2 <= 99)
		{
			f_d2 = (n2 / 10 + '0');
			l_d2 = (n2 % 10 + '0');

			if (n < n2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);

				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
