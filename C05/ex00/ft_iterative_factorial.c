/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:37:50 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/11 14:13:24 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (temp > 1)
	{
		nb *= temp;
		temp --;
	}
	return (nb);
}

/*int main()
{
	printf("%d", ft_iterative_factorial(12));
}*/