/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:35:24 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/02 13:37:26 by rodrigocaixin    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 1;
	nbr2 = 2;
	ft_swap(&nbr1, &nbr2);
	return (0);
}*/
