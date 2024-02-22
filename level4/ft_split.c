#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_wordlen(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		if (str[i] && str[i] != ' ' && str[i] != '\t')
			count++;
		while (str[i] != ' ' && str[i] != '\t' && !(str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
	}
	return (count);
}
// char    **ft_split(char *str)
// {
// 	int worldlen = ft_wordlen(str);
// }
int main()
{
	char str[] = "Hello world from suraj";
	int worldlen = ft_wordlen(str);
	printf("%d\n", worldlen);
}
