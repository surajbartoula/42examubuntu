#include <unistd.h>
int	double_count(char *str, char c, int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int i = 0;
	while (str1[i])
	{
		if (double_count(str1, str1[i], i) == 0)
			write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (double_count(str1, str2[i], i) == 0)
		{
			if (double_count(str2, str2[i], i) == 0)
			{
				write(1, &str2[i], 1);
			}
		}
		i++;
	}
	
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, &"\n", 1);
}