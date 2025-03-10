/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:49:37 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/10 21:09:11 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hex_1;
	int		hex_2;
	char	hex_code[] = "0123456789abcdef";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			hex_1 = str[i] / 16;
			hex_2 = str[i] % 16;
			write(1, "\\", 1);
			write(1, &hex_code[hex_1], 1);
			write(1, &hex_code[hex_2], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*int	main(void)
{
	char *str = "Hello \n Im yo dawg.";
	ft_putstr_non_printable(str);
	return (0);
}*/
