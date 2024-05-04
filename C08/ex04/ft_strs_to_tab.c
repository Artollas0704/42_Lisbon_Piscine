/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:29:38 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/21 19:06:48 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*str_n;
	int		i;

	i = 0;
	str_n = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str_n)
		return (0);
	while (str[i])
	{
		str_n[i] = str[i];
		i++;
	}
	str_n[i] = '\0';
	return (str_n);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*va;
	int					i;

	i = 0;
	va = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!va)
		return (0);
	while (i < ac)
	{
		va[i].size = ft_strlen(av[i]);
		va[i].str = av[i];
		va[i].copy = ft_strdup(va[i].str);
		i++;
	}
	va[i].str = 0;
	return (va);
}

/*int main()
{
	char	*strings[] = {"string1", "string2", 
	"stringmuitomaior1", "fim", "", "loucura", "issae"};
	struct s_stock_str *tab = ft_strs_to_tab(7, strings);
	struct s_stock_str *it = tab;

	tab[1].copy[3] = 'o';
	tab[3].copy[0] = 'f';

	while (it->str != 0)
	{
		printf("%s\n", it->str);
		printf("%i\n", it->size);
		printf("%s\n", it->copy);
		++it;
	}
} */