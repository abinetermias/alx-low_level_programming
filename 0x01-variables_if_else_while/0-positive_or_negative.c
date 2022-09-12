#include <stdlib.h>                                                                                                                   
#include <time.h>                                                                                                                     
#include <stdio.h>                                                                                                                    

/**
 * main - prints the last digit of the random
 * number stored in the viriable n
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;                                                                                                                        
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n)
	}
                                                                             
        return (0);                                                                                                                   
}
