/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:48:11 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/10 19:56:57 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		j = 0;
		while (((str[i] >= 'a' && str[i] <= 'z') 
		|| (str[i] >= '0' && str[i] <= '9')) && str[i] != '\0')
		{
			j++;
			i++;
		}
		if (j > 0 && 
			(str[i - j] >= 'a' && str[i - j] <= 'z'))
			str[i - j] -= 32;
		if (str[i] != '\0')
			i++;
	}
	return (str);
}

/*int main()
{
	char str[61] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str2 = ft_strcapitalize(str);
	puts(str2);
}*/