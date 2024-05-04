/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:45:27 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/11 14:53:27 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		arg;
	int		ar;
	char	*str;

	arg = 1;
	ar = 0;
	if (argc > 1)
	{
		while (arg < argc)
		{
			ar = arg + 1;
			while (ar < argc)
			{
				if (ft_strcmp(argv[arg], argv[ar]) > 0)
				{
					str = argv[arg];
					argv[arg] = argv[ar];
					argv[ar] = str;
				}
				ar++;
			}
			ft_putstr(argv[arg]);
			arg++;
		}
	}
}
