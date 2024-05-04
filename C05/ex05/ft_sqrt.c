/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:17:28 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/13 20:15:39 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i <= (nb / i))
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int main()
{
	printf("%d", ft_sqrt(2147395600));
}*/