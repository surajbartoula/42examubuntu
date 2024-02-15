#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int len = 0;
	if (end > start)
		len = (end - start) + 1;
	else if (end < start)
		len = (start - end) + 1;
	else if (end = start)
		len = 1;
	int *ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (0);
	int i = 0;
	while (i < len)
	{
		if (end > start)
		{
			ptr[i] = end - i;
			i++;
		}
		else if (start > end)
		{
			ptr[i] = end + i;
			i++;
		}
	}
	return (ptr);
}

int main()
{
	int start = 0;
	int end = -3;
	int len = 0;
	int	*range = ft_rrange(start, end);
	int i = 0;
	if (end > start)
	{
		len = (end - start) + 1;
	}
	else if (end < start)
		len = (start - end) + 1;
	else if (end == start)
		len = 1;
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
}