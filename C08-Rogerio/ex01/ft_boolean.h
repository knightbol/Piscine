/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:30:52 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/16 18:32:57 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN_MSG "I have an even number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) ((nbr & 1) == 0)

typedef enum bool_
{
	FALSE,
	TRUE
}	t_bool;

t_bool	ft_is_even(int nbr);
void	ft_putstr(char *ptr);

#endif
