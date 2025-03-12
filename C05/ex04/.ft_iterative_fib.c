/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:18:34 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/12 19:53:19 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;
	int	cu;
	int	p;		// F1 = 1
	int	pp;		// F0 = 0

	n = 1;
	cu = 1;
	p = 0;
	pp = 0;
	while (n != index)
	{
		if (cu <= 2147483647)
			return (0);
		pp = p;
		p = cu;
		cu = p + pp;
		n++;
	}
	return (cu);
}
