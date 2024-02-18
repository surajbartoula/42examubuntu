#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	while (str[i])
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void	print_hex(int n)
{
	char *symbols = "0123456789ABCDEF";
	if (n >= 16)
	{
		print_hex(n / 16);
	}
	write(1, &symbols[n % 16], 1);
}

int main(int argc, char *argv[])
{
	int	num;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, &"\n", 1);
}