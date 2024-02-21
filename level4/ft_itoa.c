#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_intsize(int nbr)
{
	int size = 0;
	if (nbr < 0)
	{
		size++;
		nbr *= -1;
	}
	else if (nbr == 0)
	{
		size++;
	}
	if (nbr > 0)
	{
		while (nbr > 0)
		{
			size++;
			nbr /= 10;
		}
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int size = ft_intsize(nbr);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	size--;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nbr)
	{
		str[size] = nbr % 10 + '0';
		size--;
		nbr /= 10;
	}
	return (str);
}

int main()
{
	int i = 0;
	char *str = ft_itoa(424343);
	while (str[i])
	{
		printf("%c\n", str[i]);
		i++;
	}
}
