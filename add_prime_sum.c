#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str) {
    int i = 0;
    int num = 0;
    while (str[i]) {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num;
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n/10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	ft_prime(int n)
{
	int i = 2;
	while (i <= n / 2)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int n = 0;
	int i = 2;
	int sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n == 0 || n == 1)
		{
			write(1, &"0", 1);
			write(1, &"\n", 1);
			return (0);
		}
		else if (n == 2)
		{
			write(1, &"2", 1);
			write(1, &"\n", 1);
			return (0);
		}
		while (i <= n)
		{
			if (ft_prime(i))
			{
				sum += i;
			}
			i++;
		}
	}
	put_nbr(sum);
	write(1, &"\n", 1);
	return (0);
}