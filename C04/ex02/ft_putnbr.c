/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:13:06 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/08 17:42:41 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
    int	i;
    char    nbrs[12];
   
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
}

/*int main(void)
{
    ft_putnbr(-2147483647);
    return (0);
}*/
