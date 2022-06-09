#include <stdio.h>
/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return : always 0
 */
int main(void)
{
	int n;
	int m;
	int l;
	for (n = 48; n <= 58; n ++)
	{
		for (m = 49; m <= 58; m++)
		{
			for (l = 50; l < = 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);

					if (n != 56 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

