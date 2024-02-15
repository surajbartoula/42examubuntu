#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	hide_np(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int len = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
			{
				len++;
				break;
			}
			j++;
		}
		i++;
	}
	if (len == ft_strlen(str1))
		write(1, &"1", 1);
	else
		write(1, &"0", 1);
}

int main(int argv, char *argc[])
{
	if (argv == 3)
	{
		hide_np(argc[1], argc[2]);
	}
	write(1, &"\n", 1);
}