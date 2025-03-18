/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:24:43 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/18 21:27:04 by rguarda-         ###   ########.fr       */
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
	p_malloc = (int *)malloc(sizeof(int) * (size));
	if (p_malloc == NULL)
		return (-1);
	*range = p_malloc;
	while (i < size)
		p_malloc[i++] = min++;
	return (size);
}
