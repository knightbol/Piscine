/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:13:06 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/11 15:52:55 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_edgecase(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	nbrs[12];
	char	digit;

	if (ft_edgecase(nb))
		return ;
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
		return ;
	}
	digit = nb + 48;
	write(1, &digit, 1);
}

/*int main(void)
{
    ft_putnbr(-42);
    return (0);
}*/
