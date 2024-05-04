/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aralves- <aralves-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:55:59 by aralves-          #+#    #+#             */
/*   Updated: 2024/03/12 17:22:29 by aralves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int main()
{
	char str1[] = "abac" , str2[] = "abad";
	printf("%d\n", ft_strncmp(str1, str2, 3));
	printf("%d\n", strncmp(str1, str2, 2));
}*/