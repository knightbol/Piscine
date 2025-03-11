/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:13:06 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/11 15:17:07 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	nbrs[12];

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 11;
	if (nb >= 10)
	{
		while (nb > 0)
		{
			nbrs[i--] = (nb % 10) + 48;
			nb = nb / 10;
		}
		write(1, &nbrs[i + 1], 11 - i);
	}
	char digit = nb + 48;
	write(1, &digit, 1);
}

int main(void)
{
    ft_putnbr(2);
    return (0);
}
