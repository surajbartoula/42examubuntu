#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
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
		ptr[i] = start + i;
		i++;
	}
	return (ptr);
}

int main()
{
	int start = 3;
	int end = 3;
	int	*range = ft_range(start, end);
	int i = 0;
	while (i < (end - start) + 1)
	{
		printf("%d\n", range[i]);
		i++;
	}
}