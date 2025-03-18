/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:58:58 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/17 23:57:18 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	int_to_ascii(int size)
{
	char	nb[3];

	if (size <= 0)
		return ;
	if (size <= 9)
	{
		nb[0] = size + '0';
		write(1, nb, 1);
	}
	if (size > 9 && size < 100)
	{
		nb[0] = '0' + (size / 10);
		nb[1] = '0' + (size % 10);
		write(1, nb, 2);
	}
	if (size >= 100)
	{
		nb[0] = '0' + (size / 100);
		nb[1] = '0' + (size / 10) % 10;
		nb[2] = '0' + (size % 10);
		write(1, nb, 3);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;

	count = 0;
	while (par[count].str != 0)
	{
		write(1, par[count].str, par[count].size);
		write(1, "\n", 1);
		int_to_ascii(par[count].size);
		write(1, "\n", 1);
		write(1, par[count].copy, par[count].size);
		write(1, "\n", 1);
		count++;
	}
}
