/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:13:27 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/18 21:18:03 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
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
		*dest = *sep++;
	return (start);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	len_sep;
	char	*cat;
	char	*p_malloc;

	i = 0;
	len = 0;
	len_sep = 0;
	if (!size)
	{
		p_malloc = (char *)malloc(1);
		if (!p_malloc)
			return (NULL);
		cat = p_malloc;
		return (cat);
	}
	if (!strs || !sep)
		return (NULL);
	while (*sep++)
		len_sep++;
	while (i < size)
		len += ft_len(strs[i++]);
	len += ((size - 1) * len_sep) + 1;
	cat = (char *)malloc(len);
	if (!cat)
		return (NULL);
	i = 0;
	while (strs[i])
		cat = ft_strcatsep(cat, strs[i++], sep);
	return (cat);	
}
