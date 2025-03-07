/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:40:23 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/06 21:51:05 by rodrigocaixin    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int	result;
	char	*s1 = "Hello I'm Rodrigo";
	char	*s2 = "Hello m Rodrigo";

	result = 0;
	result = ft_strncmp(s1, s2, 7);
	printf("strcmp: %d",result);
	return (0);
}*/
