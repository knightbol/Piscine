/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:31:02 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/12 02:19:13 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	if (power == 0)
		return (1);
	return (result);
}
