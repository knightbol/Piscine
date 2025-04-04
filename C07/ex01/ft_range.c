/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:22:33 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/19 19:05:26 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	int		i;
	char	digit;
	char	nbrs[12];

	i = 11;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		while (n > 0)
		{
			nbrs[i--] = (n % 10) + 48;
			n /= 10;
		}
		write(1, &nbrs[i + 1], 11 - i);
		write(1, "\n", 1);
		return ;
	}
	digit = n + 48;
	write(1, &digit, 1);
	write(1, "\n", 1);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * (size));
	if (range == NULL)
		return (NULL);
	while (i < size)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}

/*int	main(int argc, char **argv)
{
	int	min;
	int	max;
	int	diff;
	int	i;

	i = 0;
	min = 2;
	max = 10;
	diff = max - min;
	if (argc >= 1 && argv)
	{
		int *nums = ft_range(2, 10);
		while (i <= diff)
		{
			ft_putnbr(nums[i++]);
		}
	}
	return (0);
}*/
