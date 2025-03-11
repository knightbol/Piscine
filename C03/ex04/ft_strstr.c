/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:40:23 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/11 16:02:32 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] != '\0'
				&& to_find[j] != '\0'
				&& str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[40] = "Hello I'm Rodrigo.";
	char	*s2 = "Rodrigo.";
	char	*result;
	
	result = ft_strstr(s1, s2);
	
	if (result)
	    printf("Found: %s \n", result);
	else
	    printf("Not Found.\n");
	return (0);
}*/
