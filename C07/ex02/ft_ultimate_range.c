#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*p_malloc;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	size = max - min;
	p_malloc= (int *)malloc(sizeof(int) * (size));
	if (p_malloc == NULL)
		return (-1);
	*range = p_malloc;
	while (i < size)
		p_malloc[i++] = min++;
	return size;
}
