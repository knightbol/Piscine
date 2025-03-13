/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 23:02:27 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/13 16:26:24 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	fac = nb;
	while (nb > 1)
	{
		fac = fac * (nb - 1);
		nb--;
	}
	return (fac);
}

/*int	main(void)
{
	int i = ft_iterative_factorial(1);
	printf("%d", i);
	return (0);
}*/
