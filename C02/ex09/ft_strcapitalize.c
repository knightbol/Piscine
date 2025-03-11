/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:17:11 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/11 14:56:13 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123 && str[i] <= 126)))
			if (str[i + 1] != '\0'
				&& str[i + 1] >= 'a'
				&& str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "salut";
	printf("Original: %s\n", str1);	
	ft_strcapitalize(str1);
	printf("Capitalized: %s\n", str1);
	return(0);
}*/
