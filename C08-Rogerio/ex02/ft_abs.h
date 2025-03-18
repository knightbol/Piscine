/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogde-so <rogde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:35:13 by rogde-so          #+#    #+#             */
/*   Updated: 2025/03/16 20:23:29 by rogde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	sixpack(int n)
{
	if (n < 0)
		return (n = -n);
	return (n);
}

# define ABS(Value) sixpack(Value)

#endif
