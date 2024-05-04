/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:52:18 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/11 20:07:45 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_check(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len <= 1)
		return (1);
	while (base[i])
	{
		j = 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[i + j])
		{
			if (base[i + j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	nb;

	nb = nbr;
	base_len = ft_strlen(base);
	if (base_check(base, base_len) == 0)
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb < base_len)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}

/*int main()
{
	ft_putnbr_base(90, "0123456789ABCDEF");
}*/