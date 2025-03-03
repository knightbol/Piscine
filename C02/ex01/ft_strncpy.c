/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:37:55 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/03 22:32:16 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	char	str1[] = "Hey I'm about to be copied.";
	char	str2[40];
	int size = sizeof(str2) / sizeof(str2[0]);
	int i = 0;

	ft_strncpy(str2, str1, 5);
	while (i < size - 1)
	{
		printf("%c", str2[i]);
		i++;
	}
	return(0);
}
