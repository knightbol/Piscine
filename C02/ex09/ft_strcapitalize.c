/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:17:11 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/04 19:17:51 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	lowc;

	i = 0;
	lowc = 0;
	while (str[i] != '\0')
	{
		while (lowc != 1)
		{	
			lowc = 0;
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				lowc = 0;
				str[i] = str[i] + 32;
				
			}	
			i++;
			
			if (str[i + 1] == '\0')
			{
				lowc = 1;
				i = 0;
			}
		}	
			if (str[0] >= 'a' && str[0] <= 'z')
				str[0] = str[0] - 32;

			if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
			i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "heLLOOO mY fRiEndD!";
	printf("Original: %s\n", str1);	
	ft_strcapitalize(str1);
	printf("Capitalized: %s\n", str1);
	return(0);
}
