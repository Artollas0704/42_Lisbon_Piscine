/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:19:10 by aralves-          #+#    #+#             */
/*   Updated: 2024/02/28 19:36:34 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
	}
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + 48);
		return ;
	}
	else if (num >= 10)
	{
		ft_putchar(num / 10 + 48);
		ft_putchar(num % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	num[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			ft_putnbr(num[0]);
			write(1, " ", 1);
			ft_putnbr(num[1]);
			if (num[0] != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			num[1]++;
		}
		num[0]++;
	}
}
