/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:29:44 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/15 16:44:50 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	char 	*temp;

	if (argc > 1)
	{
		i = 0;
        	while (i < argc - 1) 
        	{
			j = 1;
			while (j < argc - i - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					temp = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = temp;
				}
				j++;
			}
			i++;
		}
		i = 1;
		while (i < argc)
			ft_putstr(argv[i++]);
	}
	return (0);
}
