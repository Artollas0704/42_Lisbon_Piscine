/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:39:29 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/21 18:14:54 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(num) (ft_abs(num))

int	ft_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

#endif