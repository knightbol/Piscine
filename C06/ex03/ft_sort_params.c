/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:29:44 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/13 19:33:51 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


int	main(int argc, char **argv)
{
	int	j;
	int	biggest;

	j = 1;
	biggest = 0;
	if (argc >= 1)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
				ft_swap(argv[j + 1], argv[j]);
			j++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			j++;
		}	
	}
	return (0);
}
