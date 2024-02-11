#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	writestr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	wdmatch(char *str1, char *str2)
{
	int i = 0;
	int count = 0;
	while (str1[i])
	{
		int j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				count++;
				i++;
				break;
			}
			j++;
		}
		i++;
	}
	if (count == ft_strlen(str1))
		return (1);
	return (0);
}

int main(int argc, char *argv)
{
	if (argc == 3)
	{
		if (wdmatch(argv[1], argv[2]) == 1)
			writestr(argv[1]);
	}
	write(1, &"\n", 1);
}