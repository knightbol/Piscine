/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:42:13 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/12 16:44:48 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 0;
	result = 0;
	while (*str)
	{
		if (*str == 45)
			sign++;
		if (*str <= '9' && *str >= '0')
		{
			while (*str >= 48 && *str <= 57)
			{
				result = result * 10 + (*str - 48);
				str++;
			}
			break ;
		}
		else if (!(*str == '+' || *str == '-' || *str == ' '))
			return (0);
		str++;
	}
	if (sign % 2)
		return (-result);
	return (result);
}

/*int	main(void)
{
	int	nbr = ft_atoi("abc123");
	printf("%d\n", nbr);
	return (0);
}*/
