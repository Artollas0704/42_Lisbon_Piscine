/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:04:58 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/05 19:05:42 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
	char	str[3];
	str[0] = 31;
	str[1] = 127;
	str[2] = 'a';
	int num = 0;
	num = ft_str_is_printable(str);
	printf("%d", num);
}*/