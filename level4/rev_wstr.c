#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

void	rev_wstr(char *str)
{
	int len = ft_strlen(str);
	len--;
	while (len > 0)
	{
		while (str[len] && is_space(str[len]))
			len--;
		int lastword = len;
		while (str[len] && !(is_space(str[len])))
			len--;
		int firstword = len + 1;
		while (firstword <= lastword)
		{
			write(1, &str[firstword], 1);
			firstword++;
		}
		if ((len + 1) > 1)
			write(1, &" ", 1);

	}

}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, &"\n", 1);
	return EXIT_SUCCESS;
}
