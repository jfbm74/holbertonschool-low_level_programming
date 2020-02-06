#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Check sign on int
*
* Return: 0
*/
int main(void)
{
	int n;
	int lastone;

	/*Generating a random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*print the last digit of the number stored in the variable n*/
	lastone = n % 10;
	if (lastone > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastone);
	} else if (lastone == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastone);
	} else if (lastone < 6 && lastone !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastone);
	}
	return (0);
}
