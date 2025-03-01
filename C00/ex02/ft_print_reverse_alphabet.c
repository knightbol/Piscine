/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:48:28 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/01 23:44:38 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	chr;

	chr = 'z';
	while (chr >= 'a')
	{
		ft_putchar(chr);
		chr--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
