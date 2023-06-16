#include <stdio.h>
/**
* main - main description
* Numbers must be separated by ,, followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination of the two digits 0 and 1
* Print only the smallest combination of two digits
* Return: 0
*/
int main(void)
{
	int n;
	int d = 0;

	while (d < 10)
	{
		n = 0;
		while (n < 10)
		{
			if (d != n && d < n)
			{
				putchar('0' + d);
				putchar('0' + n);

				if (n + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			n++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}

