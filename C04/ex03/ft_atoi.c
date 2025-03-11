/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:42:13 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/11 20:22:27 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str [i] == 45)
			sign++;
		if (str[i] <= '9' && str[i] >= '0')
		{
			while (str[i] >= 48 && str[i] <= 57)
			{
				result = result * 10 + (str[i] - 48);
				i++;
			}
			break ;
		}
		else if (!(str[i] == '+' || str[i] == '-' || str[i] == ' '))
			return (0);
		i++;
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
