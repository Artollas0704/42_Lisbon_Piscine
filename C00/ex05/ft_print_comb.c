/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:55:57 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/28 19:13:41 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(char str[])
{
	if (str[0] == '7' && str[1] == '8' && str[2] == '9')
		write(1, str, 3);
	else 
		write(1, str, 5);
}

void	ft_print_comb(void)
{
	char	str[5];

	str[0] = '0';
	str[3] = ',';
	str[4] = ' ';
	while (str[0] <= '7')
	{
		str[1] = str[0] + 1;
		while (str[1] <= '8')
		{
			str[2] = str[1] + 1;
			while (str[2] <= '9')
			{
				ft_write(str);
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}
