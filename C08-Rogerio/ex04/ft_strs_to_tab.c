/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:08:32 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/18 00:04:00 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*duplica(char *str)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc((len(str) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			count;
	t_stock_str	*array;

	if (ac == 0 || av == NULL)
		return (NULL);
	count = 0;
	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (count < ac)
	{
		array[count].size = len(av[count]);
		array[count].str = av[count];
		array[count].copy = duplica(array[count].str);
		if (array[count].copy == NULL)
		{
			while (count > 0)
				free(array[--count].copy);
			free(array);
			return (NULL);
		}
		count++;
	}
	array[ac] = (t_stock_str){0, 0, 0};
	return (array);
}
