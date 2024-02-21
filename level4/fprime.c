#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int i = 2;
	if (n == 1)
		printf("1");
	while (i <= n)
	{
		if ((n % i) == 0)
		{

			printf("%d", i);
			if (n == i)
				break;
			printf("*");
			n /= i;
			i = 1;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int n = 0;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		fprime(n);
	}
	printf("\n");
}
