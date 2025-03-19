/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:08:46 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/19 19:03:33 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

char	*ft_strdup(char *src)
{
	size_t	size;
	char	*dest;

	if (!src)
		return (NULL);
	size = 0;
	while (src[size])
		size++;
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	size = 0;
	while (src[size])
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

/*int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *cp_str = ft_strdup(argv[1]);
		ft_putstr(argv[1]);
		ft_putstr(cp_str);
	}
	return (0);
}*/
