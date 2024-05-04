/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 14:27:34 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/05 19:52:35 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoipos(char *str)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	if (str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	if (str[i] == '\0')
		return (value);
	return (0);
}

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	if (argc == 3)
	{
		"23" "34"
		num1 = ft_atoipos(argv[1]);
		num2 = ft_atoipos(argv[2]);
		if (num1 <= 0 || num2 <= 0)
		{
			write(2, "Only accept positive integers, 0 excluded\n", 42);
			return (1);
		}
		rush(num1, num2);
	}
	else
	{
		write(2, "Number of arguments needs to be exatly 3", 40);
		return (1);
	}
	return (0);
}
