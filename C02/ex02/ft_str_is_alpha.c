/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:46:56 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/03 18:09:46 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) 
			|| str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	int num = 0;
	num = ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	printf("%d", num);
}*/