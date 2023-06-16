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
	int a;
	int d;
	int n = 0;

	while (n < 10)
	{
		d = 0;
		while (d < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != d && d != n && n < d && d < a)
				{
					putchar('0' + n);
					putchar('0' + d);
					putchar('0' + a);

					if (a + d + n != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				a++;
			}
			d++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

