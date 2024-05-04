/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 19:09:23 by vsoares-          #+#    #+#             */
/*   Updated: 2024/03/03 17:55:33 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (++l <= y)
	{
		while (++c <= x)
		{
			if (c == 1 && (l == 1 || l == y))
				ft_putchar ('A');
			else if (c == x && (l == 1 || l == y))
				ft_putchar ('C');
			else if (c == 1 || l == 1 || c == x || l == y)
				ft_putchar ('B');
			else
				ft_putchar (' ');
		}
		ft_putchar ('\n');
		c = 0;
	}
}
