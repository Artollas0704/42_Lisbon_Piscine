/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:35:28 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/13 20:37:48 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
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

/*int main()
{
	char	*str;

	str = calloc(12, sizeof(char));
	str = "Hello World";
	printf("%s\n", ft_strdup(str));
	
}*/