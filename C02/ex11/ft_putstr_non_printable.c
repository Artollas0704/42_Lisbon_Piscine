/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:17:01 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/11 22:20:06 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_non_printable(char c)
{
	char	*str;

	str = "0123456789abcdef";
		ft_putchar(str[c / 16]);
		ft_putchar(str[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_write_non_printable(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char str[] = {1, 2, 3, 4, 5, 6, 7, 10 , 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 30, 125, 126, 127};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/