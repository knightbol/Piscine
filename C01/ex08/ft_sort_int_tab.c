/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:07:34 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/03 21:10:11 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*void print_arr(int *tab, int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sorted;

	i = 0;
	sorted = 0;
	while (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab [i + 1] = temp;
				sorted = 0;
			}
			else
				i++;
		}
	}
}

/*int	main(void)
{
	int arr[] = {2,5,1,4,3};
	int size = sizeof(arr) / sizeof(arr[0]);

	ft_sort_int_tab(arr, size);
	return (0);
}*/
