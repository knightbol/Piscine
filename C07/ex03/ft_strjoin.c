/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:13:27 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/25 00:20:10 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strcatsep(char *dest, char *src, char *sep)
{
	char	*start;

	if (src == NULL || dest == NULL || sep == NULL)
		return (NULL);
	start = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	while (*sep)
		*dest++ = *sep++;
	*dest = '\0';
	return (start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*cat;

	i = 0;
	len = 0;
	if (!size || !strs || !sep)
		return ((char *)malloc(1));
	while (i < size)
		len += ft_len(strs[i++]);
	len += (ft_len(sep) * (size - 1)) + 1;
	cat = malloc(len);
	if (!cat)
		return (NULL);
	*cat = '\0';
	i = 0;
	while (i < size)
	{
		if (i < size - 1)
			cat = ft_strcatsep(cat, strs[i++], sep);
		else
			cat = ft_strcatsep(cat, strs[i++], "");
	}
	return (cat);
}

/*int	main(void)
{
	char	*strings[] = {"Hello", "World", "test"};
	char	*sep = "--";
	char	*result = ft_strjoin(3, strings, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
