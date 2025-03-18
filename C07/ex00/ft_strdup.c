/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:08:46 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/18 15:56:00 by rguarda-         ###   ########.fr       */
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
	char	*p_malloc;

	if (!src)
		return (NULL);
	size = 0;
	while (src[size])
		size++;
	p_malloc = (char *)malloc(size + 1);
	if (p_malloc == NULL)
		return (NULL);
	dest = p_malloc;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (p_malloc);
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
