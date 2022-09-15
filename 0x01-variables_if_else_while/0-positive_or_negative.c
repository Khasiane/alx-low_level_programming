#include <stdlib.h>
#include <time.h>
/* print if number is positive , zero, or negative */

/* Discription; this programme prints 'Programming is positive, zero, negative'
 * Return 0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand () - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{ 
		printf("%i is positive\n", n);
	}
	else if (n==0)
	{
		printf("%i is zero\n", n);
	}
			else if (n < 0)
			{
				printf("%i is negative\n");
			}
	return (0);
}
