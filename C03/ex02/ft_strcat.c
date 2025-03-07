/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigocaixinha <rguarda-@student.42lisbo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:40:23 by rodrigocaixin     #+#    #+#             */
/*   Updated: 2025/03/06 22:43:10 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{ 
	    i++;
	}
	j = i;
	i = 0;
	while (src[i] != '\0')
	{
	    dest[j] = src[i];
	    i++;
	    j++; 
	}
	dest[j] = '\0';
	return dest;
}
/*int	main(void)
{
	char	s1[40] = "Hello I'm Rodrigo.";
	char	*s2 = "I'm the other Rodrigo.";

	ft_strcat(s1, s2);
	printf("Dest: %s",s1);
	return (0);
}*/
