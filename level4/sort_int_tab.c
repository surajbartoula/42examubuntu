#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			int temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main( void )
{
	int tab[] = {16, 32, 15, 12};
	int len = sizeof(tab)/sizeof(tab[0]);
	sort_int_tab(tab, len);
	int i = 0;
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
