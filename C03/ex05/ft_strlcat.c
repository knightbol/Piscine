/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:40:23 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/12 17:29:12 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_calc_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	src_len = ft_calc_size(src);
	dest_len = 0;
	dest_len = ft_calc_size(dest);
	j = dest_len;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (j < (size - 1) && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*int	main(void)
{
	char		s1[30] = "Hello I'm Rodrigo.";
	char		*s2 = "I'm the other Rodrigo.";
	unsigned int	result;

	result = ft_strlcat(s1, s2, 3);
	printf("Total length of the concatenated string: %d", result);
	return (0);
}*/
