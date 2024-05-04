/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:33:22 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/03 15:57:45 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (b == y && a == x && y > 1 && a > 1))
				ft_putchar('A');
			else if (((a > 1 && a < x) && (b == 1 || b == y)) 
				|| ((a == 1 || a == x) && (b > 1 && b < y)))
				ft_putchar('B');
			else if (b > 1 && b < y && a > 1 && a < x)
				ft_putchar(' ');
			else if ((a == x && b == 1) || (b == y && a == 1))
				ft_putchar('C');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
