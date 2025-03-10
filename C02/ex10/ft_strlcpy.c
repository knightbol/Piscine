/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:37:55 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/10 20:40:45 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	str1[] = "Hey I'm about to be copied.";
	char	str2[40];
	unsigned int i = 0;
	unsigned int	size = 6;
	
	ft_strlcpy(str2, str1, size);
	while (i < size - 1)
	{
		printf("%c", str2[i]);
		i++;
	}
	return(0);
}*/
