/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:49:37 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/05 02:41:17 by rodrigocaixin    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		hex_1;
	int		hex_2;
	char	hex_code[] = "0123456789abcdef";
}

int	main(void)
{
	char *str = "Hello \n Im yo dawg.";
	int size = sizeof(str) - 1;
	ft_print_memory(str, size);
	return (0);
}

