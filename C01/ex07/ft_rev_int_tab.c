/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:50:27 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/02 22:47:56 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		printf("%d", arr[i]);
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	
	i = 0;
	while(i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
	print_array(tab, size);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	size;

	size = sizeof(arr);
	ft_rev_int_tab(arr, size);
	return (0);
}
