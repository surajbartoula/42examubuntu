#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	if (a > 0 && b > 0)
	{
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		printf("%d", a);
	}
}

int main(int argc, char *argv[])
{
	int nbr1 = atoi(argv[1]);
	int nbr2 = atoi(argv[2]);
	if (argc == 3)
	{
		pgcd(nbr1, nbr2);
	}
	printf("\n");
	return (0);
}

