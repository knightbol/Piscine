/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguarda- <rguarda-@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:12:51 by rguarda-          #+#    #+#             */
/*   Updated: 2025/03/13 18:14:36 by rguarda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		argc -= 1;
		while (argv[argc][i] != '\0' && argc > 0)
		{
			while (argv[argc][i] != '\0')
			{
				write(1, &argv[argc][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			argc--;
		}
	}
	return (0);
}
