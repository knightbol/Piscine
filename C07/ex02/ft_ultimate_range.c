/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:24:43 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/22 13:32:52 by rodrigocaixin    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	*range = (int *)malloc(sizeof(int) * (size));
	if (*range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		*range[i] = min++;
		i++;
	}
	return (size);
}
