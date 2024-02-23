#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ispace(char c)
{
	if (c == ' ' || c == '\t' || ((c >= 9) && (c <= 13)))
     		return (1);
     return (0);
}

int	ft_wordlen(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || (str[i] >= 9 && str[i] <= 13) &&str[i])
		{
			i++;
		}
		if (str[i] && str[i] != ' ' && str[i] != '\t')
			count++;
		while (str[i] != ' ' && str[i] != '\t' && !(str[i] >= 9 && str[i] <= 13) &&str[i])
		{
			i++;
		}
	}
	return (count);
}

int	ft_lenaspace(char *str)
{
	int i = 0;
	while (str[i] && !(ispace(str[i])))
		i++;
	return (i);
}

char	*ft_word(char *str)
{
	int wordlen = ft_lenaspace(str);
	char *word = malloc(sizeof(char) * (wordlen + 1));
	int i = 0;
	while (i < wordlen)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char    **ft_split(char *str)
{
	int worldlen = ft_wordlen(str);
	char **strings = malloc(sizeof(char *) * worldlen + 1);
	int i = 0;
	while (*str)
	{
		while (*str && ispace(*str))
			str++;
		if (*str && !(ispace(*str)))
		{
			strings[i] = ft_word(str);
			i++;
		}
		while (*str && !(ispace(*str)))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

int main()
{
	char str[] = "Hello world from suraj";
	char **string;
	int i = 0;

	string = ft_split(str);
	while (string[i] != 0)
	{
		printf("%s\n", string[i]);
		i++;
	}
}
