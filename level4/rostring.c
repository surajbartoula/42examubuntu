#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t' || (c >= 9 && c <= 13))
	{
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rostring(char *str)
{
	int i = 0;
	int len = ft_strlen(str);
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		int start = i;
		while (str[i] && !(is_space(str[i])))
			i++;
		int end = i;
		while (str[i] && is_space(str[i]))
			i++;
		int spacevalue = i;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		if (spacevalue != i)
			write(1, &" ", 1);
		while (start < end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, &"\n", 1);
	return (0);
}
