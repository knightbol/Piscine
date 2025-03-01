/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:10:24 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/01 19:03:02 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chrs(char i, char j, char z)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &z, 1);
	if (i != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	z;

	i = '0';
	j = '1';
	z = '1';
	while (!(i == '7' && j == '8' && z == '9'))
	{
		if (j == '8')
		{
			i++;
			j = i + 1;
			z = j;
		}
		if (z == '9')
		{
			j++;
			z = j + 1;
		}
		else
			z++;
		ft_print_chrs(i, j, z);
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
